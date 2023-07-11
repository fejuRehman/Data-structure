// minimum cost of frog jump
#include<bits/stdc++.h>
using namespace std ;
int min_cost(int* arr,int n){
    // base case
    if(n<=0) return 0;
    // recursive case
    int r=INT_MAX;
    int l=min_cost(arr,n-1)+ abs(arr[n]-arr[n-1]);
    r=min_cost(arr,n-2)+ abs(arr[n]-arr[n-2]);
    return min(l,r);

} 
// memoization
int min_cost2(int* arr,int n,vector<int>v){
    //base case
    if(n==0) return 0;
    // recursive case
    // check if answer is alredy present
    if(v[n]!=-1) return v[n];
    // calculate answer 
    int r=INT_MAX;
    int l=min_cost(arr,n-1)+ abs(arr[n]-arr[n-1]);
    r=min_cost(arr,n-2)+ abs(arr[n]-arr[n-2]);
    return v[n]=min(l,r);
   
}
// dynamic programming
int min_cost3(int* arr,int n){
    vector<int>dp(n);
    dp[0]=0;
    int r=INT_MAX;
    for(int i=1;i<n;i++){
       int l=dp[i-1]+abs(arr[i]-arr[i-1]);
        if(i>1)r=dp[i-2]+abs(arr[i]-arr[i-2]);
        dp[i]=min(r,l);
    }
    return dp[n-1];
} // space optimization and most optimize technique
int min_cost4(int* arr,int n){
    int prev1=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int fs=prev1+abs(arr[i]-arr[i-1]);
        int ss=INT_MAX;
        if(i>1) ss=prev2+abs(arr[i]-arr[i-2]);
        int curri=min(fs,ss);
        prev2=prev1;
        prev1=curri;
    }
    return prev1;
} 


int main(){
int arr[]={30,10,60,10,60,50};
int n=sizeof(arr)/sizeof(int);
vector<int>v(n+1,-1);
cout<<min_cost(arr,n-1)<<endl;
cout<<min_cost2(arr,n-1,v)<<endl;
cout<<min_cost3(arr,n)<<endl;
cout<<min_cost4(arr,n)<<endl;
return 0;
}