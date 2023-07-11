// you are given ana arraylist of N integer you are supposed to return the maximum sum of the subsequence with the constraint that no two element are adjacent in given array list
#include <bits/stdc++.h>
using namespace std;
int max_adj_sum(int *arr, int n)
{
    // base case
    if (n == 0)
        return arr[n];
    if (n < 0)
        return 0;
    // recursive case
    int  pic= arr[n] + max_adj_sum(arr, n - 2);
    int not_pick = 0 + max_adj_sum(arr, n-1);
    return max(pic, not_pick);
}
// momoization approach
int max_adj_sum1(int *arr, int n,vector<int>v)
{
    // base case
    if (n == 0)
        return arr[n];
    if (n < 0)
        return 0;
    if(v[n]!=-1) return v[n];    
    // recursive case
    int  pic= arr[n] + max_adj_sum(arr, n - 2);
    int not_pick = 0 + max_adj_sum(arr, n-1);
    return v[n]=max(pic, not_pick);
}// dynamic approach
 int max_adj_sum2(int *arr, int n){
 vector<int>dp(n,-1);
 dp[0]=arr[0];
 for(int i=1;i<n;i++){
     int take=arr[i]; if(i>1) take+=dp[i-2];
    int not_take=0+dp[i-1];
    dp[i]=max(take,not_take);
 }
 return dp[n-1];
} 
// space optimization method or most optimise technique
int max_adj_sum3(int *arr, int n){
int prev2=0;
int prev1=arr[0];
 for(int i=1;i<n;i++){
     int take=arr[i]; if(i>1) take+=prev2;
    int not_take=0+prev1;
    int curri=max(take,not_take);
    prev2=prev1;
    prev1=curri;
 }
 return prev1;
} 

int main()
{
    int arr[] = {2, 1, 4,9};
    int n =sizeof(arr)/sizeof(int);
    cout<<max_adj_sum(arr, n-1)<<endl;
    vector<int>v(n,-1);
    cout<<max_adj_sum1(arr, n-1,v)<<endl;
    cout<<max_adj_sum2(arr, n)<<endl;
    cout<<max_adj_sum3(arr, n)<<endl;
    return 0;
}