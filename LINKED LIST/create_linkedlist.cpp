// statically creating linked list
#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=0;
    }
};
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    /* here we are not getting any value bcz we have losted our head pointer
     thats why we always should temp pointer to print data
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    } */
    temp=head;
  while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main(){
    //statically
node n1(1);   //creating 1st node
//now we need a head pointer to store address of first node
node* head=&n1;
node n2(2);  //creating 2nd node
node n3(3);  //creating 3rd node
node n4(4);  //creating fourth node
node n5(5);  //creating fifth node
//now we will store address of other node using dot operator 
//here we are not using arrow bcz here we know directly the node but in dynamically 
//there will be a pointer present 
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
print(head);// pass by value is calling 
print(head);

return 0;
}