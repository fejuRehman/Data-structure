// maximum sub array sum 
#include<bits/stdc++.h>
using namespace std ;
// Brute force approach order of n^3
int max_sum_subarr(int* arr,int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=i;
            int e=j;
            int sum=0;
            for(int k=s;k<=e;k++){
                 sum+=arr[k];
            }
            ans=max(ans,sum);
            
        }
    }
    return ans;
}// this approach will solve this prblm in order of n^2
int max_sum_subarr2(int * arr,int n){
    int ans=INT_MIN;
    int* csum=new int[n];
    csum[0]=arr[0];
    for(int i=1;i<n;i++){
        csum[i]=csum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int curr_sum=0;
            int s=j;
            int e=i-1;
            if(s==0) curr_sum=csum[i];
            else curr_sum=csum[s]-csum[e];
             ans=max(ans,curr_sum);
        }
    }
   return ans;
}
 // kadens algorithm or optimal approach in order of n
 int kadens_algo(int* arr,int n){
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        if(curr_sum<0) curr_sum=0;
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
 } 
   
int main(){
int arr[]={1,-2,3,4,-1,-2,8};
int n =sizeof(arr)/sizeof(int);
cout<<max_sum_subarr(arr,n)<<endl;
cout<<max_sum_subarr2(arr,n)<<endl;
cout<<kadens_algo(arr,n)<<endl;
return 0;
}