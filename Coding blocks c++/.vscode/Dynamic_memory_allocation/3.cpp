//2-D dynamic array allocation
#include<bits/stdc++.h>
using namespace std ;
void function1(int **arr,int r,int c){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}
}
int main(){
int row=10;
int col=10;

//creating a 2-D array

int** arr=new int*[row];
for(int i=0;i<row;i++){
    arr[i]=new int[col];
}
//taking the input in array
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
  function1(arr,3,3);
//printing the output of array
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }cout<<endl;
// }
return 0;
}