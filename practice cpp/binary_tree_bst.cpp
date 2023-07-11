#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node():data(-1),left(0),right(0){}
    node(int data):data(data),left(0),right(0){}
};
node* insert_bst(node* root,int data){
    // base case
       if(!root){
        root=new node(data);
        return root;
       }
    // recursive case
        if(root->data>=data)
        root->left=insert_bst(root->left,data);
        else
        root->right=insert_bst(root->right,data);
        return root;
}
node* create_bst(){
    int data;
    cin>>data;
    node* root=0;
    while(data!=-1){
        root=insert_bst(root,data);
        cin>>data;
    }
    return root;
}
void preorder(node* root){
    // base case
    if(!root) return;
    //recursive case
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void level_order(node* root){
    queue<node*>q;
    q.push(root);
    q.push(0);
    while(q.size()>1){
        node* current=q.front();
        q.pop();
        if(!current){
            cout<<endl;
            q.push(0);
            continue;
        }
        if(current->left) q.push(current->left);
        if(current->right) q.push(current->right);
        cout<<current->data<<" ";
    }
}
bool is_bst(node* root,int mn=INT_MIN,int mx=INT_MAX){
    // base case
    if(!root) return true;
    // recursive case
    if(root->data>=mn and root->data<=mx and is_bst(root->left,mn,root->data)
    and is_bst(root->right),root->data,mx ) return true;
    return false;

}

int main(){
node* root=create_bst();        //8 3 10 1 6 14 4 7 13-1
preorder(root);
cout<<endl;
level_order(root);
cout<<endl;
cout<<is_bst(root);
return 0;
}