// count subset with sum k 

/*
#include <bits/stdc++.h> 
int f(vector<int>&arr,int n,int tar,vector<vector<int>>&dp){
    if(n==0){
      if(arr[0]==0 and tar==0) return 2;
      if(tar==0 or arr[0]==tar) return 1;
      else return 0;
    }
    if(dp[n][tar]!=-1) return dp[n][tar];
    // recursive case
    int not_pick= f(arr,n-1,tar,dp);
    int pick=0;
    if(arr[n]<=tar) pick=  f(arr,n-1,tar-arr[n],dp);
    return dp[n][tar]=pick+not_pick;
}

int findWays(vector<int> &num, int tar)
{
  int n=num.size();
  vector<vector<int>>dp(n,vector<int>(tar+1,-1));
  return f(num,n-1,tar,dp);
}
*/