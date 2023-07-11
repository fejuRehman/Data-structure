# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[n];
}int m=sizeof(arr)/sizeof(arr[0]);
int temp;
for(int i=m-1;i>0;i--){
    if(arr[i]>arr[i-1]){
        temp=i;
        break;
    }
}
for(int j=m-1;j>temp;j--){
    if(arr[j]>arr[temp]){
        swap(arr[j],arr[temp]);
        break;
    }
}
for(int k=0;k<m;k++){
    cout<<arr[k]<<endl;
}

return 0;
}