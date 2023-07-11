// creating a binary tree
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
   Node(int d):data(d),left(NULL),right(NULL){};
};

Node* create_binary_tree(){
      Node* root=NULL;
      int data;
      cin>>data; 
      if(data==-1) return root;
      else{
        root=new Node(data);
        root->left=create_binary_tree();
        root->right=create_binary_tree();

      }
  return root;
       
}
void preorder(Node* root){
  // base case

  if(root==NULL) return;
  // recurive case 
     cout<<root->data<<" ";
     preorder(root->left);
     preorder(root->right);
}
void inorder(Node* root){

// base case
  if(root==NULL) return;
  // recurive case 
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
}
void postorder(Node* root)
// base case
{
  if(root==NULL) return;
  // recurive case 
     preorder(root->left);
     preorder(root->right);
     cout<<root->data<<" ";
}
// count the no of nodes of a tree
int count_nodes(Node* root){
  if(root==NULL) return 0;
  int left=count_nodes(root->left);
  int right=count_nodes(root->right);
  return left+right+1;

} 

// height of a tree

int height_tree(Node* root){
      if(root==NULL) return 0;
      int left_h=height_tree(root->left);
      int right_h=height_tree(root->right);
      return max(left_h,right_h)+1;
}
// diameter of a tree
int diameter_tree(Node* root){
  if(root==NULL) return 0;
  int op1=height_tree(root->left)+height_tree(root->right);
  int op2=diameter_tree(root->left);
  int op3=diameter_tree(root->right);
  return max(op1,max(op2,op3));
}
// fast diameter
class Pair{
  public:
  int height;
  int diameter;
};

Pair fast_dia(Node* root){
  if(root==NULL){
    Pair p;
    p.height=p.diameter=0;
    return p;

  }
  Pair left=fast_dia(root->left);
  Pair right=fast_dia(root->right);
  Pair p;
  p.height=max(left.height,right.height)+1;
  int op1=left.height+right.height;
  int op2=left.diameter;
  int op3=right.diameter;

  p.diameter=max(op1,max(op2,op3));
  return p;

}
// search in a binary tree
Node* search(Node* root,int key){
  if(root==NULL) return 0;
   if(root->data==key){
    return root;
   }
   Node* left=search(root->left,key);
   if(left!=NULL) return left;
   Node* right=search(root->right,key);
    return right;
   
}
// mirror of a tree
void mirror(Node* root){
  if(root==NULL) return ;
  // recursive case
  swap(root->left,root->right);
  mirror(root->left);
  mirror(root->right);
}
// level order traversal
void Level_Order_Traversal(Node* root){
  // base case
  if(root==NULL) return;
  queue<Node*>q;
  q.push(root);
  q.push(NULL);

while(!q.empty()){
Node* front=q.front();
    q.pop();

if(front!=NULL){
  cout<<front->data<<" ";
  if(front->left)q.push(front->left);
  if(front->right)q.push(front->right);
}
else{
  cout<<endl;
  if(!q.empty()) q.push(NULL);
}

}

}

// creating a tree using preorder and inorder 
 int pre[]={8 ,10, 1 ,6 ,4, 7, 3, 14, 13};
 int in[]={1, 10, 4 ,6, 7, 8, 3, 13, 14 };
 int n=sizeof(pre)/sizeof(int);
 int i=0;
Node* build_tree(int s,int e){
  if(s>e) return NULL;
  Node* root=new Node(pre[i++]);
  int k=-1;
  for(int j=s;j<=e;j++){
       if(in[j]==root->data){
        k=j;
        break;
       }
  }
  root->left=build_tree(s,k-1);
  root->right=build_tree(k+1,e);
  return root;
}

int main(){
// Node* root=create_binary_tree(); 
/*
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
cout<<"Node: "<<count_nodes(root)<<endl;
cout<<"Height: "<<height_tree(root)<<endl;
cout<<"Diameter: "<<diameter_tree(root)<<endl;
*/
Node* root=build_tree(0,n-1);
// Pair ans=fast_dia(root);
// cout<<"height: "<<ans.height<<endl;
// cout<<"diameter: "<<ans.diameter<<endl;
// cout<<search(root,13)->data<<endl;
// mirror(root);

cout<<endl;
inorder(root);
cout<<endl;
preorder(root);
cout<<endl;
Level_Order_Traversal(root);
return 0;
}