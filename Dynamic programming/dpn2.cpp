// minimum steps to 1
#include<bits/stdc++.h>
using namespace std ;
// brute force approach
int Min_steps_1(int n){
    // base case 
      if(n==1) return 0;
    // recursive case 
    int op1=Min_steps_1(n-1);
    int op2=INT_MAX;   // kiuki mujhe minimum nikaalna h isiliye ise isse initialise krna jruri wrna ho skta h isme pdi garbage value mere dusre function se choti ho 
    int op3=INT_MAX;
    if(n%2==0){
        op2=Min_steps_1(n/2);
    }
    if(n%3==0){
        op3=Min_steps_1(n/3);
    }
   int ans= min(op1,min(op2,op3));
    return ans+1;
}
// memoization approach or top down approach
int Min_steps_1_td(int* dp,int n){
    // base case 
      if(n==1) return 0;
      // check answer already present 
      if(dp[n]!=-1) return dp[n];
    // recursive case 
    // calculate answer
    int op1=Min_steps_1(n-1);
    int op2=INT_MAX;    
    int op3=INT_MAX;
    if(n%2==0){
        op2=Min_steps_1(n/2);
    }
    if(n%3==0){
        op3=Min_steps_1(n/3);
    }
   int ans= min(op1,min(op2,op3));
   // store answer for future use
    return dp[n]=ans+1;
}  
// dynamic programming approach or bottom up approach
int Min_steps_1_ud(int n){
    int* dp=new int(n+1);
   // dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]);
            
        }
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]);
        }
        dp[i]++;
    }
    return dp[n];
}
int main(){
int n=11;
cout<<Min_steps_1(n)<<endl;
cout<<Min_steps_1_ud(n)<<endl;
int *arr=new int(n+1);
for(int i=0;i<=n;i++){
    arr[i]=-1;
}
cout<<Min_steps_1_td(arr,n)<<endl;
return 0;
}