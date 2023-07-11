// dynamic array creation
#include<bits/stdc++.h>
using namespace std ;
class dynamic_arr{
    int *data;
    int next_index;
    int capacity; //size of array
    public:
    dynamic_arr(){
        data=new int[5];
        next_index=0;
        capacity=5;
    }
    //copy constructor
    dynamic_arr(dynamic_arr const &s){
    this->data=new int[s.capacity];
    for(int i=0;i<s.next_index;i++){
        this->data[i]=s.data[i];
    }
    this->next_index=s.next_index;
    this->capacity=s.capacity;
    }
    void add_element(int element){
        if(next_index==capacity){
        int *newarr=new int[2*capacity];
        for(int i=0;i<capacity;i++){
            newarr[i]=data[i];
        }
        capacity*=2;
        delete[]data;
        data=newarr;
        }
        data[next_index]=element;
        next_index++;
    }
    void add_element(int i,int element){
       if(i<next_index){
        data[i]=element;
       }
       else if(i==next_index){
        add_element(element);
       }
       else{
        return;
       }
    }
    void print(){
        for(int i=0;i<next_index;i++){
            cout<<data[i]<<endl;
        }
    }

};
int main(){
    dynamic_arr s;
    s.add_element(100);
    s.add_element(200);
    s.add_element(300);
    s.add_element(400);
    s.add_element(500);
    s.add_element(600);
   // s.print();
    dynamic_arr s1(s);
    s.print(); 
    cout<<endl<<endl;
    s1.add_element(2,70);
    //s1.print(); 
    s.print(); 

return 0;
}