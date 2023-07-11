// climbing stairs
#include<bits/stdc++.h>
using namespace std ;
int climb_stairs(int n){
    // base case
     if(n<=1) return 1;
    // recursive case
    int a=climb_stairs(n-1);
    int b=climb_stairs(n-2);
    return a+b;
} 
 // memoization
int climb_stairs2(int n,vector<int>v){
    // base case
     if(n<=1) return 1;
    // recursive case
    // check if answer is already present
    if(v[n]!=-1) return v[n];
    // calculating answer
    int a=climb_stairs2(n-1,v);
    int b=climb_stairs2(n-2,v);
    // store answer for future use
    return v[n]= a+b;
} 
// dynamic programming
int climb_stairs3(int n){
    vector<int>dp(n);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
     int a=dp[i-1];
     int b=dp[i-2];
     dp[i]=a+b;

     
    }
    return dp[n];
}
int main(){
int n=10;
vector<int>v(n+1,-1);
cout<<climb_stairs(n)<<endl;
cout<<climb_stairs2(n,v)<<endl;
cout<<climb_stairs3(n)<<endl;
return 0;
}