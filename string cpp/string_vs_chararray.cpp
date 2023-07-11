#include<bits/stdc++.h>
#include<cstring>
using namespace std ;
int main(){
char arr[]="hello";
string s="world";
arr[2]='\0';
s[2]='\0'; //STRING SKIPS THE NULL CHARACTER 
s[3]='\0';
cout<<arr<<endl;
cout<<s;
return 0;
}