// fibonachhi series
#include<bits/stdc++.h>
using namespace std ;
int fibo(int n){
// base case
if(n<=1) return n;
return fibo(n-1)+fibo(n-2);
}
int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++)
  cout<<fibo(i)<<endl;
return 0;
}