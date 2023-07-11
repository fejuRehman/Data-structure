#include<bits/stdc++.h>
using namespace std ;
//REVERSE THE STRING 
void reverse(char arr[],int n){
 int s=0;
 int e=n-1;
 while(s<=e){
    swap(arr[s++],arr[e--]);
 }
}
int getlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
char ch[20]="my name is don";
//cin>>ch;
//cout<<"your name is "<<ch<<endl;
int k=getlength(ch);
cout<<k<<endl;
reverse(ch,k);
cout<<ch;
return 0;
}