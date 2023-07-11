#include<bits/stdc++.h>
using namespace std;
int count_ways(int n){
    //base case
   if(n==0 or n==1){
    return 1;
   }
    //recursive case
    int small_output1=count_ways(n-1); 
    int small_output2=count_ways(n-2);
    return small_output1+small_output2;
}
int main(){
int n=4;
int k=count_ways(n);
cout<<k;
return 0;
}