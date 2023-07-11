# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[]={1,2,3,4,5,6,7,8};
int size=sizeof(arr)/sizeof(int);
int firstI=0;
int secondI=1;
while(secondI<=size){
    swap(arr[firstI],arr[secondI]);
    firstI=firstI+2;
    secondI=secondI+2;
}for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}