// reverse an array
#include<bits/stdc++.h>
using namespace std ;
void print(int *arr,int n){
    if(n==0) return;
    cout<<arr[0]<<" ";
    print(arr+1,n-1);
}
void reverse1(int l,int *arr,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse1(l+1,arr,r-1);
}
void reverse2(int *arr,int r){
    if(r<=1) return;
    swap(arr[0],arr[r]);
    reverse2(arr+1,r-2);
}
void reverse3(int *arr,int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse3(arr,i+1,n);
}
int main(){
int arr[]={1,2,5,4,6,9,10,7,9};
int n=sizeof(arr)/sizeof(int);
print(arr,n);
cout<<endl;
//reverse2(arr,n-1);
//print(arr,n);
reverse3(arr,0,n);
print(arr,n);
return 0;
}