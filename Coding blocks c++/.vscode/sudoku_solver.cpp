#include<bits/stdc++.h>
using namespace std;
void print(int arr[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool possible(int arr[][100],int n,int i,int j,int v){
 //row check
for(int col=0;col<n;col++){
    if(arr[i][col]==v) return false;
}
//column check
for(int row=0;row<n;row++){
    if(arr[row][j]==v) return false;
}
//box check
int sr=i-i%3;
int sc=j-j%3;
int er=i-i%3+3;
int ec=j-j%3+3;
for(int row=sr;row<er;row++){
    for(int col=sc;col<ec;col++){
        if(arr[row][col]==v)return false;
    }
}
return true;

}
bool sudoku_solver(int arr[100][100],int n,int i,int j){
    //base case
   if(i==n){
    print(arr,n);
    return true;
   }
   if(j==n){
   return sudoku_solver(arr,n,i+1,0);
   }
    //recursive case

  if(arr[i][j]!=0){
    return sudoku_solver(arr,n,i,j+1);
  }
  for(int v=1;v<=n;v++){
    if(possible(arr,n,i,j,v)){
        arr[i][j]=v;
        if(sudoku_solver(arr,n,i,j+1)) return true;
        arr[i][j]=0;
    }
  }
  return false;
}
int main(){
int arr[100][100]={0};
int n=9;
sudoku_solver(arr,n,0,0);
return 0;
}