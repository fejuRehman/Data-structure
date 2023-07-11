//mod method for rotating array
# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[5]={1,2,3,4,5};
int arr2[5];
int n;
cin>>n;
for(int i=0;i<5;i++){
    arr2[(i+n)%5]=arr[i];
}
for(int i=0;i<5;i++){
    cout<<arr2[i]<<" ";
}
return 0;
}