# include<iostream>
  using namespace std ;
 int main(){
int n;
cout<<"enter size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cout<<"the size of array is";
  cin>>arr[n];
}
int m;
cout<<"the search element is";
cin>>m;
for(int i=0;i<n;i++){
  if(arr[i]==m){
    cout<<i;
  }
}
return 0;
}