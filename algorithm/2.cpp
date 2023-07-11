// principle hole principle
// good sum problem  
//gud sub array use bolte h jisme hme maximum kitne subarray h jika
// sum divisible ho size of array 
#include<bits/stdc++.h>
using namespace std ;
int gud_sub(int* arr,int n){
int* freq=new int[n];
memset(freq,0,n*sizeof(int));
freq[0]++;
int csum=0;
for(int i=0;i<n;i++){
    csum+=arr[i];
    csum%=n;
    freq[csum]++;
}
int ans=0;
for(int i=0;i<n;i++){
    ans+=freq[i]*(freq[i]-1)/2;
}
return ans;
}
int main(){
int arr[]={2,3,5,6,4};
int n=sizeof(arr)/sizeof(int);
cout<<gud_sub(arr,n);
return 0;
}