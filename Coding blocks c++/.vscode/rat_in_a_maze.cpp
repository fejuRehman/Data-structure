#include<bits/stdc++.h>
using namespace std ;
void print(char arr[][5],int n){
   arr[0][0]='1';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool rat_table(char arr[5][5],int n,int i,int j){
//base case
if(i==n-1 and j==n-1){
    print(arr,n);
    return false;// for all possible path
    return true;
}
//recursive
char element1=arr[i][j+1];
if(j+1<n and element1!='x' ){
arr[i][j+1]='1';
if(rat_table(arr,n,i,j+1)) return true;
arr[i][j+1]='0';
}
char element2=arr[i+1][j];
if(i+1<n and element2!='x' ){
    arr[i+1][j]='1';
    if(rat_table(arr,n,i+1,j)) return true;
    arr[i+1][j]='0';
}
return false;

}
int main(){
char arr[5][5]={"000x",
                "0000",
                "x0x0",
                "00x0"
                };
   rat_table(arr,4,0,0);
   //arr[0][0]='1';
return 0;
}