# include<bits/stdc++.h>
  using namespace std ;
  int printmax(int arr[],int size);
  int printmin(int arr[],int size);
  int printavg(int arr[],int size);
 int main(){
int arr[5]={1,2,3,5,4};
cout<<printmax(arr,5)<<endl;
cout<<printmin(arr,5)<<endl;
cout<<printavg(arr,5);
return 0;
}
int printmax(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[0]<arr[i]){
            max=arr[i];
        }
    }
}
int printmin(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }return min;
}
int printavg(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
     sum=sum+arr[i];
    }
    return sum/size;
}