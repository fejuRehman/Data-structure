// stack using linked list
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
     this->data=data;
    next=NULL;
    }

    
};
class Stack{
    node* head;
    int Size;   // number of element present in stack
    public:
    Stack(){
        head=NULL;
         Size=0;  
    }
    void push(int data){
        node* newnode=new node( data);
        newnode->next=head;
        head=newnode;
        Size++;
    }
    int  pop(){
        if(empty()) return 0;
        node* temp=head;
        head=head->next;
        int ans=temp->data;
        delete temp;
        Size--;
        return ans;
    }
    int size(){
        return Size;
    }
    bool empty(){
        return head==NULL;
    }
    int top(){
        if(empty()) return 0;
        return head->data;
    }
};
int main(){
Stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout<<s.size()<<endl;
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.size()<<endl;
cout<<s.empty();

return 0;
}