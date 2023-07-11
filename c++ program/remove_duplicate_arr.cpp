# include<bits/stdc++.h>
  using namespace std ;
 void remove_duplicate(int arr[],int size){
int i;
int count=0;
for(i=0;i<10;i++){
    if(arr[i]!=arr[i+1]){
        arr[count++]=arr[i];
    }
}
for(int i=0;i<count;i++){
    cout<<arr[i];
}
 }
 int main(){
int arr[10]={1,1,1,2,2,3,3,4,4,4};
remove_duplicate(arr,10);
return 0;
}