//basics of dynamic memory allocation
#include<bits/stdc++.h>
using namespace std ;
int main(){
int *a=new int;
//cin>>*a;
*a=10;  //we cannot use only a
char *ch=new char;
*ch='a';
cout<<ch<<endl;
cout<<* ch<<endl;
cout<<*a<<endl;
cout<<a<<endl;
delete a;
delete ch;
return 0;
}