# include<bits/stdc++.h>
using namespace std ;
int rotate_array(int arr[],int size){
int i;
int temp=arr[8];
for( i=9;i>0;i--){
    arr[i]=arr[i-1];
}arr[0]=temp;
for(int i=0;i<9;i++){
    cout<<arr[i];
}cout<<endl;
 }
 
 int main(){
    int n;
int arr[9]={1,2,3,4,5,6,7,8,9};

rotate_array(arr,9);
rotate_array(arr,9);
rotate_array(arr,9);

return 0;
}