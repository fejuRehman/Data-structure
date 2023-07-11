# include<bits/stdc++.h>
  using namespace std ;
  int array_sum(int arr[],int size){
    //int static sum=0;
    if(size==0){
   return 0;
    }
     //sum=sum+arr[0];
   return arr[0]+ array_sum(arr+1,size-1);
  
  }
 int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//int m=sizeof(arr)/sizeof(arr[0]);
cout<<array_sum(arr,n);
return 0;
}