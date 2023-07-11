//recursion only applied on outer array
# include<bits/stdc++.h>
using namespace std ;
void bubble_sort(int arr[],int m,int i){
    //base case
    if(i==m-1){
        return;
    }

    //recursive case

    for(int j=0;j<m-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubble_sort(arr,m,i+1);
}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={1,3,15,6,17,9,10,4};
int n=sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,n,0);
print_arr(arr,n);
return 0;
}