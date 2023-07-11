// queue using linked list
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
class Queue{
    node* head,*tail;
    int size;     // number of element present in a queue
    public:
    Queue(){
        head=tail=NULL;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    int front(){
        if(isempty()) return 0;
        return head->data;
    }
    void enqueue(int data){
         if(head==NULL and tail==NULL){
            head=tail=new node(data);
         }
         else{
            tail->next=new node(data);
            tail=tail->next;
         }
         size++;
    }
    int dequeue(){
        if(isempty()) return 0;
        int data=head->data;
         node* temp=head;
         head=head->next;
         delete[] temp;
         size--;
         return data;
    }

};   

int main(){
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
cout<<q.front()<<endl;
cout<<q.getsize()<<endl;
cout<<q.isempty()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.getsize()<<endl;
cout<<q.isempty()<<endl;

return 0;
}