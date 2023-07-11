// unique number in an array
#include<bits/stdc++.h>
using namespace std ;
int unique_no(int* arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
int arr[]={2,4,5,6,5,6,2,4,-1};
int n=sizeof(arr)/sizeof(int);
cout<<unique_no(arr,n);
return 0;
}