#include<bits/stdc++.h>
using namespace std ;
int fibo1(int n){
    // base case
       if(n<=1){
        return n;
       }
    // recusive case
    int a=fibo1(n-1);
    int b=fibo1(n-2);
    return a+b;
}
// memoization of top down approach
int fibo2(vector<int>dp,int n){
    // base case
       if(n<=1){
        return n;
       }
    //check answer already exist
    if(dp[n]!=-1) return dp[n];
    // recusive case ->calculate answer
    int a=fibo2(dp,n-1);
    int b=fibo2(dp,n-2);
    // store answer for future use
    dp[n]=a+b;
    // return the final output
    return dp[n];
}
// dynamic programming or bottom up approach or ierative approach--->> this is best approach among three of them
int fibo3(int n){
    int * dp=new int(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];   
}
int main(){
int n=10;
cout<<fibo1(n)<<endl;
vector<int>v(n+1,-1);
cout<<fibo2(v,n)<<endl;
cout<<fibo3(n)<<endl;
return 0;
}