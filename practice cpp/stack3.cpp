// balanced paranthesis
#include<bits/stdc++.h>
#include<stack>
using namespace std ;
bool is_balanced(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            s.push(str[i]);
        }
        if(str[i]=='['){
            s.push(str[i]);
        }
        if(str[i]=='{'){
            s.push(str[i]);
        }
        if(str[i]==')'){
            if(s.empty())return false;
            if(s.top()=='(') s.pop();
        }
        if(str[i]==']'){
            if(s.empty())return false;
            if(s.top()=='[') s.pop();
        }
        if(str[i]=='}'){
            if(s.empty())return false;
            if(s.top()=='{') s.pop();
        }
    }
  return s.empty();

}
int main(){
string str="{(a+b)*[(c)+d][e+f]}";
if(is_balanced(str)){
    cout<<"balanced paranthesis";
}else cout<<"not balanced";
return 0;
}