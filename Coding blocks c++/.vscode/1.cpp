//searching an element in an array using recursion
#include<bits/stdc++.h>
using namespace std;
bool checkNumber(int arr[], int size, int x){
    if(arr[size]==0){
        return false;
    }
     if(arr[0]==x){
        return true;
    }
     return checkNumber(arr+1,size-1,x);
 
    
}
int main(){
int size;
cout<<"Enter the size of an element"<<endl;
cin>>size;
int arr[size];
cout<<"Enter the elements"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}
int x;
cout<<"Enter the element you have to check"<<endl;
cin>>x;
bool answer = checkNumber(arr,size,x);
cout<<answer<<endl;
return 0;
}