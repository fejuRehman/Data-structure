# include<bits/stdc++.h>
using namespace std ;
void bubble_sort(int arr[],int m){
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
  bubble_sort(arr,n);
  print_array(arr,n);
return 0;
}