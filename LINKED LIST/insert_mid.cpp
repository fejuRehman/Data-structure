#include <bits/stdc++.h>                           
using namespace std;
class node
{
public:
    int data;
    node *next;
    node() : next(0) {}
    node(int data) : data(data), next(0) {}
};
node* insert_mid(node* head ){
    node*slow=head;
    node*fast=head;
    while(fast->next!=NULL and fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
}
int main(){
    
    return 0;
}