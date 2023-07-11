// always prefer head and tail for inserting 
#include<bits/stdc++.h>
using namespace std ;

    class node{
    public:
    int data;
    node* next;
    node():next(0){};
    node(int d):next(0),data(d){}
}; 
node* take_input(){
    int data;
    cin>>data;
    node* head=NULL;
    while(data!=-1){
        node* newnode=new node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            node* temp=head;
            while(temp->next!=NULL){ //not a good method bcz its complexity is n square
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
void insert_end(node*&head,node*&tail){
     int data;
     cin>>data;
    if(tail!=NULL){
        tail->next=new node(data);  //good method complexity is order of n
        tail=tail->next;
    }else{
        head=tail=new node(data);
    }
}
node* insert_ith_position(node* head,node* tail){
    int data;
    cin>>data;
    int t;
    cin>>t;
    node* temp=head;
    int count=0;
    if(t==0){
        node* newnode=new node(data);
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!=NULL and count<t-1){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    node* newnode=new node(data);
    newnode->next=temp->next;
    temp->next=newnode;
    }
    return head;
}
node* find_mid(node* head, node* tail){
    node* slow=head;       
    node* fast=head->next; // if we want to start fast with head
                         //then we have to change the condition of while loop we have to set fast->next!=NULL and fast->next->next!=NULL
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
void delete_beginning(node* &head, node* &tail)
{
    if (head == NULL)
    {
        cout << "NO ELEMENT IS PRESENT" << endl;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}
void delete_end(node *&head, node *&tail){

    if (head == NULL)
    {
        cout << "NO ELEMENT IS PRESENT" << endl;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = tail = 0;
    }
    else
    {
        node *t = head;
        while (t->next != tail)
        {
            t = t->next;
        }
        delete tail;
        tail = t;
        tail->next = NULL;
    }
}
void delete_node(node* &head,node* &tail,int index){
    if(head->next==NULL or index==0){
        delete_beginning(head,tail);
    }
    else if(index>5){
    return ;
    }
    else{
    node* temp=head;
    int count=0;
    while(temp!=NULL and count<index-1){
      temp=temp->next;
      count++;
    }
    node *temp1=temp->next;
    temp->next=temp->next->next;
    delete temp1;
    }
}
void reverse(node* &head,node* &tail){
     node *p=NULL;
     node *c=head;
     node *n=head;
     while(c){
        n=n->next;
        c->next=p;
        p=c;
        c=n;
     }
     swap(head,tail);
     
}  
node* find_kth_pos_from_last(node* head,node* tail){
    int k;
    cin>>k;
    node* fast=head;
    node* slow=head;
    k--;
    while(k--){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;

}
void bubble_sort(node* &head){
    int lenght=5;
    for(int i=0;i<lenght-1;i++){
        node* p=0;
        node* c=head;
        node* n=c->next;
        while(n){
            if(c->data>n->data){
                //swaping hogi
             if(!p){
                //head swap hoga
                head=head->next;
                p=head;
             }   
             else{
                //head swap nhi hoga
                p->next=n;
                p=p->next;
             }
             c->next=n->next;
             n->next=c;
             n=c->next;
            
            }
            else{
                // swapping nhi hogi
                p=c;
                c=n;
                n=n->next;
            } 
            
            }
    }
}

bool check_cyclic(node* &head,node* &tail){
   tail->next=head->next->next;
    node* fast=head;
    node* slow=head;
    while(fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return fast;
        }
    }
    
    
}
node* find_cyclic_node(node* &head,node* &tail){
   tail->next=head->next->next;
    node* fast=head;
    node* slow=head;
    while(fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return fast;
        }
    }
    
    
}
void remove_cycle(node* & head,node * &tail){
    node* fast=find_cyclic_node(head,tail);
    node *slow=head->next;
    node* prev=fast;
    fast=fast->next;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
        prev=prev->next;
        
    }
    prev->next=NULL;
    }

void print(node *head){
       
        while(head!=NULL){
            cout<<head->data<<"-> ";
            head=head->next;
        }
        cout<<"NULL";
    }
int main(){
 node* head=0,*tail=0;
 for(int i=0;i<5;i++){
    insert_end(head,tail);
 }
//node* head=take_input();
 //print(head);
//node* temp=insert_ith_position(head,tail);
// int d;
// cin>>d;
//delete_node(head,tail,d);
//reverse(head,tail);
//node* temp=find_kth_pos_from_last(head,tail);
//cout<<temp->data<<endl;
print(head);
cout<<endl;
//cout<<cyclic(head,tail);
//remove_cycle(head,tail);
bubble_sort(head);
print(head);

return 0;
}