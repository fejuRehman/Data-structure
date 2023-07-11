//print all subset sum in increasing order
#include<bits/stdc++.h>
using namespace std ;
void subset_sum(int* arr,int ind,int n,vector<int>&v,int sum){
    // base case
    if(ind==n){
       v.push_back(sum);
       
       return;
    }
    // recursive case
    // picking the element
    sum+=arr[ind];
    subset_sum(arr,ind+1,n,v,sum);
    sum-=arr[ind];
    subset_sum(arr,ind+1,n,v,sum);
   
}
int main(){
int arr[]={1,2};
int n=sizeof(arr)/sizeof(int);
vector<int>v;
subset_sum(arr,0,n,v,0);
sort(v.begin(),v.end());
for(auto i:v) cout<<i<<" ";
return 0;
}