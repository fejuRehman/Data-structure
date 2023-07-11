#include<bits/stdc++.h>
using namespace std ;
int calculate_all_ways(int arr[][10],int n,int i,int j){
    //base case
    if(i==n-1 or j==n-1){
        return 1;
    }
    //recursive case
    int small_output1=calculate_all_ways(arr,n,i+1,j);
    int small_output2=calculate_all_ways(arr,n,i,j+1);
    int small_ouput3=calculate_all_ways(arr,n,i+1,j+1);
    
    return small_output1+small_output2+small_ouput3;
}
int main(){
int arr[10][10]={0};
int n=3;
int m=3; 
 int k=calculate_all_ways(arr,n,0,0);
 cout<<k;
return 0;
}