#include<bits/stdc++.h>
using namespace std ;
int  cal_fibo1(int n,vector<int>v){
    // base case
    if(n<=1) return n;
    // recursive case
    // check if already calculated
    if(v[n]!=-1) return v[n];
    // not present then calculate
    int a=cal_fibo1(n-1,v);
    int b=cal_fibo1(n-2,v);
    // store answer for future use
    v[n]=a+b;
    return v[n];

}
int cal_fibo2(int n){
    int prev1=1;
    int prev2=0;
    int sum=0;
    for(int i=2;i<n;i++){
         sum=prev1+prev2;
        prev2=prev1;
        prev1=sum;
    }
    return sum;
}
int main(){
int n=10;
vector<int>v(n+1,-1);
cout<<cal_fibo1(n,v);
cout<<endl;
cout<<cal_fibo2(n+1);
return 0;
}