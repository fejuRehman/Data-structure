// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
// 8 3 10 1 6 14 4 7 13

#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
    int data;
    node* left,*right;
    node():left(0),right(0){}
    node(int data):left(0),right(0),data(data){}
};
node* insert_bst(node*root,int data ){
    // base case
     if(!root){
        root=new node(data);
        return root;
     }
    // recursive case
    if(data>=root->data) 
    root->right=insert_bst(root->right,data);
    else 
    root->left=insert_bst(root->left,data);
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
void levelwise_traversal(node* root){
   queue<node*>q;
   q.push(root);
   q.push(0);
   while(q.size()>1){
    node* curr=q.front();
    q.pop();
   if(!curr){
    cout<<endl;
    q.push(0);
    continue;
   }
    if(curr->left){
        q.push(curr->left);
    }
    if(curr->right){
        q.push(curr->right);
    }
    cout<<curr->data<<" ";
   }
   cout<<endl;
}
node* search(node* root,int data){
    // base case
     if(!root) return root;
    // recursive case
    if(root->data==data) return root;
    else if(root->data> data) return search(root->left,data);
    else return search(root->right,data);
}
void  inorder( node* root,int k1,int k2){
    // base case
     if(!root) return;
    // recursive case
    if(root->data>=k1)
       inorder(root->left,k1,k2);
    if(root->data>=k1 and root->data<=k2)
       cout<<root->data<<" ";
    if(root->data<=k2)
       inorder(root->right,k1,k2);
}
bool is_bst(node* root,int min=INT_MIN,int max=INT_MAX){
      // base case
      if(!root) return true;
      // recursive case
    if(root->data>=min and root->data<=max and is_bst(root->left,min,root->data)
    and is_bst(root->right,root->data,max) ) return true;
    return false;
}
class Pair{
    public:
    bool balanced;
    int height;
};
Pair is_balanced(node* root){
    // base case

    // recursive case
    // condition 1
    Pair l=is_balanced(root->left);
    //
}
int main(){
node* root=create_bst();
//cout<<search(root,20)->data<<endl;
levelwise_traversal(root);
//inorder(root,-100,100);
cout<<endl;
//inorder(root,5,10);
return 0;
}