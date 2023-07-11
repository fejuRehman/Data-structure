/* triangle problem
1
2 3
3 6 7 
8 9 6 1 
we have to find minimum cost to reach from 1 to last row we can only move
either down or diagonally
*/



#include<bits/stdc++.h>
using namespace std ;
// recursive approach
int min_cost(int arr[][4],int i,int j){
    // base case
    if(i==3) return arr[i][j];
    // recursive case
    int d=arr[i][j]+min_cost(arr,i+1,j);
    int dg=arr[i][j]+min_cost(arr,i+1,j+1);
    return min(d,dg);
}
// momoization
int min_cost(int arr[][4],int i,int j,vector<vector<int>>&dp){
    // base case
    if(i==3) return arr[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    // recursive case
    int d=arr[i][j]+min_cost(arr,i+1,j,dp);
    int dg=arr[i][j]+min_cost(arr,i+1,j+1,dp);
    return  dp[i][j]=min(d,dg);
}
// dynamic approach
int min_cost(int arr[][4]){
    vector<vector<int>>dp(4,vector<int>(4));
    for(int j=0;j<4;j++){
        dp[3][j]=arr[3][j];
    }
    for(int i=2;i>=0;i--){
        for(int j=i;j>=0;j--){
            int d=arr[i][j] +dp[i+1][j];
            int dg=arr[i][j]+dp[i+1][j+1];
            dp[i][j]=min(d,dg);
        }

    }

  return dp[0][0];
}
// space optimize approach
int min_cost_s(int arr[][4]){
    vector<int>prev(4,0);
    vector<int>curr(4,0);
    for(int j=0;j<4;j++){
        prev[j]=arr[3][j];
    }
    for(int i=2;i>=0;i--){
        for(int j=i;j>=0;j--){
            int d=arr[i][j] +prev[j];
            int dg=arr[i][j]+prev[j+1];
            curr[j]=min(d,dg);
        }
       prev=curr;
    }

  return prev[0];
}
int main(){
int arr[][4]={{1},{2,3},{3,6,7},{8,9,6,10}};
vector<vector<int>>dp(4,vector<int>(4,-1));    
cout<<min_cost(arr,0,0)<<endl;
cout<<min_cost(arr,0,0,dp)<<endl;
cout<<min_cost(arr)<<endl;
cout<<min_cost_s(arr)<<endl;

return 0;
}