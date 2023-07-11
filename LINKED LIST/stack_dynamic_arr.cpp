#include<bits/stdc++.h>
using namespace std ;
class Stack{
    private:
    int *data;
    int capacity;
    int top_stack;
    public:
      Stack(){
       data=new int[4];
       top_stack=0;
       capacity=4;
      }
 void push(int element){
    if(top_stack==capacity) {
        int * newdata=new int[2*capacity];
        for(int i=0;i<capacity;i++)
            newdata[i]=data[i];
        capacity=2*capacity;
        delete []data;
          data=newdata;
        }
    data[top_stack]=element;
    //cout<<arr[top_stack];
    top_stack++;
    
} void pop(){
    if(!top_stack){
        cout<<"stack underflow"<<endl;
    }
    top_stack--;
}
 int top(){
    if(!top_stack) return -1;
    return data[top_stack-1];
 } 
 bool empty(){
    return top_stack==0;
 }
 void print(){
    for(int i=empty();i<top_stack;i++){
        cout<<data[i]<<" ";
    }
 }
};
int main(){
 Stack s;
 
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