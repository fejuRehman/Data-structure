# include<bits/stdc++.h>
using namespace std;
int merge_sort(int arr1[],int n,int arr2[],int m){
    int i=0,j=0,k=0;
    int arr3[m+n];
    while(i<n and j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<n+m;i++){
        arr1[i]=arr3[i];
        cout<<arr1[i];
    }

}
int main(){
int arr1[8]={1,3,5,7};
int arr2[4]={2,4,6,8};
int n=4;
int m=4;
// int n=sizeof(arr1)/sizeof(int);
// int m=sizeof(arr2)/sizeof(int);
merge_sort(arr1,n,arr2,m);
//print_arr(arr1,n);
return 0;
}