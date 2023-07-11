# include<bits/stdc++.h>
  using namespace std ;
  int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int small_output=fib(n-1)+fib(n-2);

    return small_output;
  }
 int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
  cout<<fib(i)<<" ";
 }
return 0;
}