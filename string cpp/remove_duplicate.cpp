#include<bits/stdc++.h>
using namespace std ;
void remove_duplicate(char arr[]){
    // base case
    if(arr[0]=='\0') return;
    // recursive case
    if(arr[0]!=arr[1]){
      remove_duplicate(arr+1);
    }
    else{
        int i=2;
        for(;arr[i];i++){
            arr[i-1]=arr[i];
        
    arr[i]='\0';
    remove_duplicate(arr);
        }
    }
}
int main(){
char arr[100]="aabbccd";
///cin>>arr;
remove_duplicate(arr);
cout<<arr<<endl; 
return 0;
}