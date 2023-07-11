# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[]={8,2,7,4,5,9};
int size=sizeof(arr)/sizeof(int);
int si=0;
int li=size-1;
for(int i=0;i<size/2;i++){
    swap(arr[si],arr[li]);
    si++;
    li--;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}