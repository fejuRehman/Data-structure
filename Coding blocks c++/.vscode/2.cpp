# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[10];
cout<<"enter the first 3 element"<<endl;
for(int i=0;i<3;i++){
    cin>>arr[i];
}cout<<"enter the next 2 element"<<endl;
for(int j=3;j<5;j++){
    cin>>arr[j];
}cout<<"output data will be"<<endl;
for(int x=0;x<5;x++){
    cout<<arr[x]<<endl;
}
return 0;
}