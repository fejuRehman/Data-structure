# include<bits/stdc++.h>
  using namespace std ;
  int bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
  }
 int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int size=sizeof(arr)/sizeof(arr[0]);
bubblesort(arr,size);
if(n%2==0){
    cout<<float(arr[(n/2)]+arr[(n/2)-1])/2;
}
else{
    cout<<(arr[((n+1)/2)-1]);
}
return 0;
}