#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node():next(0){};
    node(int d):next(0),data(d){}
};
void insert_end(node*&head,node*&tail){
     int data;
     cin>>data;
    if(tail!=NULL){
        tail->next=new node(data);  
        tail=tail->next;
    }else{
        head=tail=new node(data);
    }
}
node*  merge_two_sorted(node* &h1,node* &h2){
    node* fh=0,*ft=0;
    
     if(h1->data<h2->data){
        fh=ft=h1;
        h1=h1->next;
        
     }
     else{
        fh=ft=h2;
        h2=h2->next;
        
     }
    while(h1 and h2){
        if(h1->data<h2->data){
            ft->next=h1;
            ft=h1;
            h1=h1->next;
            
            
            
        }
        if(h1->data>h2->data){
            ft->next=h2;
            ft=h2;
            h2=h2->next;
            
            
        }
    } if(h1==NULL){
     ft->next=h2;
    }if(h2==NULL){
        ft->next=h1;
    }
   
   return fh;
}
void print(node *head){
       
        while(head!=NULL){
            cout<<head->data<<"-> ";
            head=head->next;
        }
        
    }
int main(){
node* h1=0,*t1=0,*h2=0,*t2=0;
for(int i=0;i<3;i++){
    insert_end(h1,t1);
}
for(int i=0;i<3;i++){
    insert_end(h2,t2);
}
node* fh=merge_two_sorted(h1,h2);
print(fh);
cout<<endl;
print(fh);
return 0;
}