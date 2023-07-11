// dynamic programming
// two approah 1.top down and 2. bottom up

// top up approch
//end->start
//recursion+memoization.
// store before return
// check before calculate

//bottom up
// start->end
//iterative approach
// base case-----initialistaion

#include<bits/stdc++.h>
using namespace std ;
// fibonachhi series by top down approach
int fibo(int n,vector<int>&dp){
    // check before calculate
    if(dp[n]!=-1) return dp[n];
    if(n<2) return dp[n]=n;
    // store before return
    return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int fibo_bu(int n){
    vector<int>dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
} 
int fibo_opt(int n){
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
int n=5;
vector<int>dp(n+1,-1);
cout<<fibo(n,dp)<<endl;
cout<<fibo_bu(n)<<endl;
cout<<fibo_opt(n)<<endl;
return 0;
}
