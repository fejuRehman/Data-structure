// currency distribution
#include<bits/stdc++.h>
using namespace std;
int curr_rec(int n){
   if(n==0) return 0;
  
    int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
    if(n>=2)op1=curr_rec(n-2);
    if(n>=7)op2=curr_rec(n-7);
    if(n>=10)op3=curr_rec(n-10);
    
    return min(op1,min(op2,op3))+1;
    
}
int main(){
int n=10;
cout<<curr_rec(n)<<endl;

return 0;
}