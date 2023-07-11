// print upto n
#include<bits/stdc++.h>
using namespace std ;
void print(int i,int n){
    // base case
    if(i>n) return;
    cout<<i<<" ";
    print(i+1,n);
}


// print decreasing order using backtrack
void print_decr(int i,int n){
    if(i>n) return ;
    print_decr(i+1,n);
    cout<<i<<" ";
}

  
// print in reverse order
void print_rev(int i,int n){
    if(i<1 ) return;
    cout<<i<<" ";
    print_rev(i-1,n);
}


// print increasing order using backtrack
 void print_incr(int i,int n){
       if(i<1) return;
       print_incr(i-1,n);
       cout<<i<<" ";
} 

// sum of first  n number by parameterised recursion
int Sum(int i ,int n,int sum){
   //base case
   if(i>n) return  sum;;
   sum+=i;
   Sum(i+1,n,sum);
   return sum;
}

 // sum of first  n number by functional recursion
int sum(int n){
    if (n==0) return 0;
    return n+sum(n-1);
}
int main(){
int n;
cin>>n;
/*print(1,n);
cout<<endl;
print_decr(1,n);
cout<<endl;
print_rev(n,n);
cout<<endl;
print_incr(n,n);
cout<<endl;
*/
cout<<Sum(1,n,0)<<endl;
cout<<sum(n)<<endl;
return 0;
}