//whenever u get space put @40
#include<bits/stdc++.h>
using namespace std;
void replace(string str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');

        }
        else{
            temp.push_back(str[i]);
        }
    }
    cout<<temp;
}
int main(){
string s="my name is don";
replace(s);
return 0;
}