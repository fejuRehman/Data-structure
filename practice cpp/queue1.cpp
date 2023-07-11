// creating a queue using array
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int* data;
    int first_index;
    int next_index;
    int size; //no of element present
    int capacity;
    public:
    Queue(int s){
      data=new int[s];
      first_index=-1;
      next_index=0;
      capacity=s;
      size=0;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    int front(){
        if(isempty()){
            cout<<"Queue is empty\n";
            return 0;
        }
        return data[first_index];
    }
    void enqueue(int element){
       // dunamically allocation
       if(size==capacity){
        int* newarr=new int[2*capacity];
        int j=0;
        for(int i=first_index;i<capacity;i++){
            newarr[j]=data[i];
            j++;
        }
        for(int i=0;i<first_index;i++){
            newarr[j]=data[i];
            j++;
        }
        first_index=0;
        next_index=capacity;
        capacity*=2;
       }
        /* statically allocation 
        if(size==capacity){
            cout<<"stack is full"<<endl;
            return;
        } 
        */
        if(first_index==-1) first_index=0;
         data[next_index]=element;
        next_index=(next_index+1)%capacity;
        size++;        
        }
    int dequeue(){
        if(isempty()) {
            cout<<"Queue is empty\n";
            return 0;
        }
        int t=data[first_index];
        first_index=(first_index+1)%capacity;
        size--;
        return t;
    }
 
};
int main(){
Queue q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
q.enqueue(60);
cout<<q.front()<<endl;
//cout<<q.dequeue()<<endl;
cout<<q.getsize()<<endl;
cout<<q.isempty()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
return 0;
}