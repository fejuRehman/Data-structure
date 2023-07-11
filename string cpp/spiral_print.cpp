#include<bits/stdc++.h>
using namespace std ;
int main(){
int arr[4][4]={1,2,3,4,
               5,6,7,8,
               9,10,11,12,
               13,14,15,16};
int sr=0;int sc=0;int er=3;int ec=3;
while(sr<=er and sc<=ec){
   for(int i =sc;i<=ec;i++){
    cout<<arr[sr][i]<<" ";
   }
    sr++;
   for(int i =sr;i<=er;i++){
    cout<<arr[i][ec]<<" ";
   }
    ec--;
   for(int i =ec;i>=sc;i--){
    cout<<arr[er][i]<<" ";
   }
    er--;
   for(int i =er;i>=sr;i--){
    cout<<arr[i][sc]<<" ";
   }
    sc++;
    
}
return 0;
}