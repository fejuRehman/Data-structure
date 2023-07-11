// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node():next(0){};
    node(int d):next(0),data(d){}
};
void insert_begin(node* &head,node* &tail){
    if(!tail){
        tail=head;
    }
    int d;
    cin>>d;
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void print(node *head){
       
        while(head!=NULL){
            cout<<head->data<<"-> ";
            head=head->next;
        }
        cout<<"NULL";
    }

int main() {
    node  *head=0,*tail=0;
    for(int i=0;i<5;i++){
        insert_begin(head,tail);
    }
   // insert_begin(head,tail);
    print(head);

    return 0;
}