#include<bits/stdc++.h>
using namespace std ;
void print(int arr[][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]) cout<<"q ";
            else cout<<"_ ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool possible(int arr[][10],int n,int i,int j){
//check for upper  column
for(int row=0;row<i;row++){
    if(arr[row][j]==1) return false;
}
//check for left upper diagonal
for(int row=i-1, col=j-1;row>=0 and col>=0;row--,col--){
   if (arr[row][col]==1) return false;
}
for(int row=i-1, col=j+1;row>=0 and col<n;row--,col++){
   if (arr[row][col]==1) return false;
}
return true;
}
bool N_queen(int arr[10][10],int n,int i){
//base case
if(i==n){
    print(arr,n);
    return true;
}
//recursive case
for(int j=0;j<n;j++){
    if(possible(arr,n,i,j)){
        arr[i][j]=1;
        if(N_queen(arr,n,i+1)) return true;
        arr[i][j]=0;
    }
}
return false;
}


int main(){
int arr[10][10]={0};
int n=4;
N_queen(arr,n,0);
return 0;
}