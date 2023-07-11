// INSERT AT BEGINNING AND END OF OF LINKED LIST
#include<bits/stdc++.h>
using namespace std ;

class node{
    public:
    int data;
    node*next;
    node():next(0){}
    node(int data):data(data),next(0){}
};
void insert_end(node* &head,node* &tail){
    int d;
    cin>>d;
    if(tail!=NULL){
        tail->next=new node(d);
        tail=tail->next;
    }
    else{
        head=tail=new node(d);
    }
  
}
void insert_begin(node* &head,node* &tail){
  int d;
  cin>>d;
  node* temp=new node(d);
  temp->next=head;
  head=temp;
  if(!tail){
  tail=head;
  }
}
  void print_all(node* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
  }

int main(){
    node *head=0,*tail=0;
    for(int i=0;i<5;i++){
        insert_end(head,tail);
    }
    print_all(head);
return 0;
}