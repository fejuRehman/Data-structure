// quick sort->this is the best method to sort the algorithm
#include<bits/stdc++.h>
using namespace std ;
int partion_index(int* arr,int low ,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot and i<=high){
            i++;
        }
        while(arr[j]>pivot and i>=low){
            j--;
        }
        if(i<j ) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(int *arr,int low,int high){
    if(low<high){
        int Pindex=partion_index(arr,low,high);
        quick_sort(arr,low,Pindex-1);
        quick_sort(arr,Pindex+1,high);
    }
}
int main(){
int arr[]={4,3,1,2,6,8,7,9,10,23,12,34,31,22,0,1,2};
int n=sizeof(arr)/sizeof(int);
quick_sort(arr,0,n-1);
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}