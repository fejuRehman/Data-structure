//array declaration dynamically
#include<bits/stdc++.h>
using namespace std ;
int main(){
int n=100;
int* arr=new int[n];
//cout<<sizeof(arr); //it will give size of pointer that is 4


//taking input in dynamic array 
for(int i=0;i<5;i++){
    //*(arr+i)=i+1;
    cin>>arr[i];
} 

//printing output in dynamic array
for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
cout<<endl;

cout<<&arr<<endl; //address of pointer

cout<<arr<<endl;  //address of zeroth index of array

// printing address of array
for(int i=0;i<5;i++)
    cout<<&arr[i]<<" ";
return 0;
delete[]arr;
}