#include<bits/stdc++.h>
using namespace std ;
class Stack{
    private:
    int *arr;
    int size_stack;
    int top_stack;
    public:
      Stack(int size_stack=10){
       this->size_stack=size_stack;
       arr=new int[size_stack];
       top_stack=0;
      }
 void push(int data){
    if(top_stack==size_stack) {
        cout<<"stack overflow"<<endl;
        return;
        }
    arr[top_stack]=data;
    
    top_stack++;
    
} void pop(){
    if(!top_stack){
        cout<<"stack underflow"<<endl;
    }
    top_stack--;
}
 int top(){
    if(!top_stack) return -1;
    return arr[top_stack-1];
 } 
 bool empty(){
    return top_stack==0;
 }
 void print(){
    for(int i=empty();i<top_stack;i++){
        cout<<arr[i]<<" ";
    }
 }
};
int main(){
 Stack s(5);
 
  for(int i=0;i<15;i++){
     
    s.push(i+1);
  }cout<<s.top()<<endl;
  s.print();
  cout<<endl;
  s.pop();
  s.pop();
  s.pop();
 cout<<s.top()<<endl;
  cout<<s.empty()<<endl;
  s.print();
return 0;
}