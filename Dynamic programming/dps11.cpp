// subset sum equal to target 


/*
#include <bits/stdc++.h> 
bool f(int n,int k, vector<int> &arr,vector<vector<int>>&dp){
    // base case
    if(k==0) return true;
    if(n==0) return(arr[0]==k);
    if(dp[n][k]!=-1) return dp[n][k];
    // recursive case
    bool not_pick=f(n-1,k,arr,dp);
    // choose to pick
    bool pick=false;
    if(arr[n]<=k)
       pick=f(n-1,k-arr[n],arr,dp);
    return dp[n][k]=pick||not_pick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
  vector<vector<int>>dp(n,vector<int>(k+1,-1));
  return f(n - 1, k, arr,dp);
}
*/