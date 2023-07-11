// minimum cost of frog jump with k distance
#include<bits/stdc++.h>
using namespace std ;
int jump_k_dist(int *arr,int n,int k){
      // base case
        if(n==0) return 0;
      // recursive case
      int ms=INT_MAX;
      for(int j=1; j<=k and j<=n;j++){
       int fs=jump_k_dist(arr,n-j,k)+ abs(arr[n]-arr[n-j]);
        ms=min(fs,ms);

      }
      return ms;
}// memoization
int jump_k_dist1(int *arr,int n,int k,vector<int>v){
      // base case
        if(n==0) return 0;
      // recursive case
      if(v[n]!=-1) return v[n];
      int ms=INT_MAX;
      for(int j=1; j<=k and j<=n;j++){
       int fs=jump_k_dist1(arr,n-j,k,v)+ abs(arr[n]-arr[n-j]);
        ms=min(fs,ms);
      }
        v[n]=ms;
      return v[n];
}
// dynamic programming
int jump_k_dist2(int * arr,int n,int k){


    vector<int>dp(n);
    dp[0]=0;
    for(int i=1;i<n;i++){
    int ms=INT_MAX;
        for(int j=1 ;j<=k and j<=i ;j++){
            int fs=dp[i-j]+abs(arr[i]-arr[i-j]);
            ms=min(fs,ms);
        }
            dp[i]=ms;
    }
    return dp[n-1];
}
int main(){
int arr[]={30,10,60,10,60,50};
int n=sizeof(arr)/sizeof(int);
cout<<jump_k_dist(arr,n-1,2)<<endl;
vector<int>v(n+1,-1);
cout<<jump_k_dist1(arr,n-1,2,v)<<endl;
cout<<jump_k_dist2(arr,n,2)<<endl;
return 0;
}
