// find the total no of unique path in a grid 

#include<bits/stdc++.h>
using namespace std ;

// recursive approach
int count_path1(int i,int j){
    // base case
    if(i==0 and j==0) return 1;
    if(i<0 or j<0) return 0;
    // recursive case
    int up=count_path1(i-1,j);
    int left=count_path1(i,j-1);
    return up+left;

}
// memoization approach
int count_path2(int i,int j,vector<vector<int>>&dp){
    // base case
    if(i==0 and j==0) return 1;
    if(i<0 or j<0) return 0;
    
    //check if answer is already present
    if(dp[i][j]!=-1)return dp[i][j];
    // recursive case
    int up=count_path2(i-1,j,dp);
    int left=count_path2(i,j-1,dp);
    return dp[i][j]=up+left;

}
// dynamic approach 
int count_path3(int n,int m){
    vector<vector<int>>dp(n,vector<int>(m,-1));
    dp[0][0]=1;
    for(int i=0;i<n ; i++){
        for(int j=0;j<m;j++){
             if(i==0 and j==0) dp[i][j]=1;
             else{
                 int up=0;
                 int left=0;
                if(i>0) up=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=up+left;
             }
        }
    }
    return dp[n-1][m-1];
}
int main(){
    int n=3;
    int m=3;
    cout<<count_path1(n-1,m-1)<<endl;
    vector<vector<int>>dp(n,vector<int>(m,-1));
    cout<<count_path2(n-1,m-1,dp)<<endl;
    cout<<count_path3(n,m)<<endl;
return 0;
}