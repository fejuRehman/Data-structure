# include<bits/stdc++.h>
  using namespace std;
  void calcmode(int arr[],int size){
  int arr1[100]={0};
  for(int i=0;i<7;i++){
    int element=arr[i];
    arr1[element]++;
  }
  int max=INT_MIN;
  int index=-1;
  for(int i=0;i<100;i++){
    if(arr1[i]>max){
        max=arr1[i];
        index=i;
    }
  }
  cout<<index<<" ";
}
 int main(){
int arr[7]={7,5,6,7,5,7,6};
calcmode(arr,7);
return 0;
}