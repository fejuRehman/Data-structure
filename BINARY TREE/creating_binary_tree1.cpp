// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
// 8 3 10 1 6 14 4 7 13

#include<bits/stdc++.h>
#include<queue>
using namespace std ;
class node{
    public:
    int data;
    node* left;
    node* right;
    node():data(-1),left(0),right(0){}
    node(int data):data(data),left(0),right(0){}
};
node* create_binary(){
    int data;
    cin>>data;
    //base case
    if(data==-1) return 0;
    // recursive case
    node* root=new node(data);
    root->left=create_binary();
    root->right=create_binary();
    return root;
}
node* create_levelwise(){
   cout<<"enter root node :"<<endl;
   int data;
   cin>>data;
   node* root=new node(data);
   queue<node*>q;
   q.push(root);
   while(!q.empty()){
    node* curr=q.front();
    q.pop();
    cout<<"Enter the children of "<<curr->data<<":\n";
    int l,r;
    cin>>l>>r;
    if(l!=-1){
        curr->left=new node(l);
        q.push(curr->left);
    }
    if(r!=-1){
        curr->right=new node(r);
        q.push(curr->right);
    }
   }
   return root;
}
 void preorder(node* root){
    // base case
    if(root==0) return;
    // recursive case
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void  inorder( node* root){
    // base case
     if(!root) return;
    // recursive case
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    // base case
    if(!root) return;
    // recursive case
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
int height_tree(node* root){
    // base case
    if(!root) return 0;
    // recursive case
    return max(height_tree(root->left),height_tree(root->right))+1;
}
int node_count(node* root){
    // base case
     if(!root) return 0;
    // recursive case
    return node_count(root->left)+node_count(root->right)+1;
}
int diameter_tree(node* root){
    // base case
    if(!root) return 0;
    // recursive case
    int op1=height_tree(root->left)+height_tree(root->right);
    int op2=diameter_tree(root->left);
    int op3=diameter_tree(root->right);
    return max(op1,max(op2,op3));
}
void mirror_bt(node* root){
    // base case
    if(!root)return;
    // recursive case
    swap(root->left,root->right);
    mirror_bt(root->left);
    mirror_bt(root->right);
}
void right_view_helper(node* root,int cl,int &ml){
// base case
if(!root) return;
if(cl>ml){
    cout<<root->data<<"\n";
    ml=cl;
}// recursive case
right_view_helper(root->right,cl+1,ml);
right_view_helper(root->left,cl+1,ml);
}
void right_view(node* root){
    int cl=0;
    int ml=-1;
    right_view_helper(root,cl,ml);
}
void top_view(node* root){
    int mr=INT16_MIN,ml=INT16_MAX;
}
void print_at_level_k(node* root,int cl,int k){
    // base case
    if(!root) return;
    if(cl==k){           //  k is level 
        cout<<root->data<<" ";
       return;
    }
    print_at_level_k(root->left,cl+1,k);
    print_at_level_k(root->right,cl+1,k);
}
int print_dist_k(node* root,int target,int k){}
int main(){
    //  input 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
node* root=create_binary();
/*
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);

node* root=create_levelwise();
right_view(root);
print_at_level_k(root,0,2);
cout<<"height: "<<height_tree(root)<<endl;
cout<<node_count(root)<<endl;
cout<<"diameter: "<<diameter_tree(root);
*/
levelwise_traversal(root);
mirror_bt(root);
levelwise_traversal(root);

return 0;
}