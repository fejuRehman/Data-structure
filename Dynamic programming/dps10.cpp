// cherry pickup
/*
#include <bits/stdc++.h>
int f(vector<vector<int>> &grid,int i,int j1,int j2,int r,int c,  vector<vector<vector<int>>>&dp){
    // base case
    if(j1<0 ||j1>=c||j2<0 ||j2>=c){
        return -1e8;
    }
    if(i==r-1){
        if(j1==j2){
            return grid[i][j1];
        }
        else{
            return grid[i][j1]+grid[i][j2];
        }
    }
     if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
    // recursive case
    int maxi=INT_MIN;
    for(int p=-1;p<2;p++){
        for(int q=-1;q<2;q++){
            if(j1==j2){
               int choc=grid[i][j1]+f(grid,i+1,j1-p,j2-q,r,c,dp);
                maxi=max(maxi,choc);
            }
            else{
               int  choc=grid[i][j1]+grid[i][j2]+f(grid,i+1,j1-p,j2-q,r,c,dp);
                maxi=max(maxi,choc);
            }
        }
    }
    return  dp[i][j1][j2]=maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
    return f(grid,0,0,c-1,r,c,dp);
}
*/