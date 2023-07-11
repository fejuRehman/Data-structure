#include<bits/stdc++.h>
# include<stack>
using namespace std;

bool is_balanced(string str){
    stack<char> s;
    for(int i=0;str[i];i++){
        if(str[i]=='(' or str[i]=='{' or str[i]=='['){
            s.push(str[i]);
        }
       else{
        if(str[i]==')' ){
            if(s.empty()) return false;
            if(s.top()=='('){
                s.pop();
            }
        }
        if(str[i]=='}' ){
            if(s.empty()) return false;
            if(s.top()=='{'){
                s.pop();
            }
        }
        if(str[i]==']' ){
            if(s.empty()) return false;
            if(s.top()=='['){
                s.pop();
            }
        }

    }
}
return s.empty();
}

int main(){
   
string str="((a+b]*{c+d}+[e+f)";
  if(is_balanced(str)){
    cout<<" yes balanced";
  }
  else{
    cout<<"not balanced";
  }

return 0;
}