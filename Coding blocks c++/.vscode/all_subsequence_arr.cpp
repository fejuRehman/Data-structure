#include<bits/stdc++.h>
using namespace std ;
void print_subset(int arr[],int out[],int index,int j){
//base case
if(index>=3){
for(int i=0;i<j;i++){
    cout<<out[i];
}
cout<<endl;
return; 
}
//exclude
print_subset(arr,out,index+1,j);
//include
out[j]=arr[index];
print_subset(arr,out,index+1,j+1);
//out[j]=0;
}
int main(){
int arr[]={1,2,3};
int out[3]={};
print_subset(arr,out,0,0);
return 0;
}