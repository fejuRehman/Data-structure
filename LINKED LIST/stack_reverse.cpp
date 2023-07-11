#include<bits/stdc++.h>
# include<stack>
using namespace std ;
void print(stack <int> s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}
void reverse_bottom(stack<int>& s,int t){
// base case
  if(s.empty()){
    s.push(t);
    return;
  }
// recursive case
int t1=s.top();
s.pop();
reverse_bottom(s,t);
s.push(t1);
}
void reverse_stack(stack<int>&s){
    // base case;
    if(s.empty()){
    return;
    }
    int t=s.top();
     s.pop();
    reverse_stack(s);

    reverse_bottom(s,t);
}
int main(){
stack <int >s;
for(int i=1;i<5;i++){
  s.push(i);
}
reverse_stack(s);
print(s);
return 0;
}