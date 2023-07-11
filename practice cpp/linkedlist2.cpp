#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int element):data(element),next(NULL){}
};
node* add_last(node* &head,node* &tail){
    int data;
    cin>>data;
    if(head==NULL and tail==NULL){
        head=tail=new node(data);
    }
    else{
        tail->next=new node(data);
        tail=tail->next;
    }
    return head;
}
node* add_begin(node* &head,node* &tail){
    int data;
    cin>>data;
    if(head and tail){
        head=tail=new node(data);
    }
     
        node* newnode=new node(data);
        newnode->next=head;
       head=newnode;
    
    return head; 
} node* reverse(node*& head,node*& tail){
    node* p=NULL;
    node* c=head;
    node* n=head;
    while(c){
        n=n->next;
        c->next=p;
        p=c;
        c=n;
    }
    swap(head,tail);
return head;
}


void print(node* &head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* head=0,*tail=0;
for(int i=0;i<5;i++){
    add_begin(head,tail);
}
print(head);
cout<<endl<<endl;
head=reverse(head,tail);
print(head);
return 0;
}