#include<bits/stdc++.h>
using namespace std ;
 void merge_two_sorted(int *arr,int s,int m,int e){
    //int arr1[100];
    vector<int>v;
    int l=s;
    int r=m+1;
    int k=s;
    while(l<=m and r<=e){
        if(arr[l]<=arr[r]){
            v.push_back(arr[l++]);
            //arr1[k++]=arr[l++];
          
        }
        else{
           //arr1[k++]=arr[r++];
             v.push_back(arr[r++]);
           
          
        } 
    }
    while(l<=m){
          v.push_back(arr[l++]);
       //arr1[k++]=arr[l++];
    } 
    while(r<=e){
          v.push_back(arr[r++]);
        //arr1[k++]=arr[r++];
     
    }
    
    for(int i=s;i<=e;i++){
        arr[i]=v[i-s];
        //arr[i]=arr1[i];
    }
 }
void merge_sort(int *arr,int s,int e){
    // base case
        if(s>=e) return;
    // recursive case
   int m=(e+s)/2;
    merge_sort(arr,s,m);
    merge_sort(arr,m+1,e);
    merge_two_sorted(arr,s,m,e);
}
int main(){
int arr[]={1,5,2,4,3,6,7,9,8};
int n=sizeof(arr)/sizeof(int);
merge_sort(arr,0,n-1);
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}