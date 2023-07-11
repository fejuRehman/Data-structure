// remove x from an string or character array
#include<bits/stdc++.h>
using namespace std ;
void remove_x( char s[] ){
    // base case
     if(s[0]=='\0') return;
    // recursive case
    if(s[0]!='x') remove_x(s+1);
    else{
        int i=1;
        for(;s[i];i++){
         s[i-1]=s[i];
        }
        s[i-1]='\0';
        remove_x(s);
    }
}
int main(){
char s[100];
cin>>s;
remove_x(s);
cout<<s;
return 0;
}