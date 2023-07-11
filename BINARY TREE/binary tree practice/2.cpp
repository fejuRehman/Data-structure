// 8 3 10 1 6 14 4 7 13 -1
#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
   Node(int d):data(d),left(NULL),right(NULL){};
};

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
void postorder(Node* root){

// base case
  if(root==NULL) return;
  // recurive case 
     postorder(root->left);
     postorder(root->right);
     cout<<root->data<<" ";
}

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


Node* insert_bst(Node* root,int d){
    // base case
    if(root==NULL){
        Node* root=new Node(d);
        return root;
    }
    // recursive case
    if(d<=root->data){
        root->left=insert_bst(root->left,d);
    }
    else{
        root->right=insert_bst(root->right,d);
    }
    return root;
}
Node * create_bst(){
    Node* root=NULL;
    int data;
    cin>>data;
    while(data!=-1){
        root=insert_bst(root,data);
        cin>>data;
    }
    return root;
}

Node* search_bst(Node* root,int key){
    if(root==NULL) return NULL;
    if(root->data==key) return root;
    else if(root->data>key){
        search_bst(root->left,key);
    }
    else{
        search_bst(root->right,key);
    }
}

// print in the range from k1 and k2
 void print_range(Node* root,int k1,int k2){
    // base case
    if(root==NULL)return;
    // recursive case
    if(root->data>k1){
         print_range(root->left,k1,k2);
    }
    if(k1<=root->data and k2>= root->data){
        cout<<root->data<<" ";
    }
    if(root->data<k2)
    print_range(root->right,k1,k2);
    

 }
 
//  height of a tree 
int height_tree(Node* root){
      if(root==NULL) return 0;
      int left_h=height_tree(root->left);
      int right_h=height_tree(root->right);
      return max(left_h,right_h)+1;
}
 
 // check if the tree is balanced tree
 bool is_balanced(Node* root){
    // base case
    if(root==NULL){
        return true;
    }
    // recursive case 
    int lh=height_tree(root->left);
    int rh=height_tree(root->right);
    int curr_h= abs(lh-rh);
    if(curr_h<=1 and is_balanced(root->left) and is_balanced(root->right)){
        return true;
    }
    else{
        return false;
    }
 }
 class Pair{
    public:
    int height;
    int balanced;
 };
 Pair fast_balanced(Node* root){
    // base case
    Pair p;
    if(root==NULL){
        p.height=0;
        p.balanced=true;
        return p;
    }
    // recursive case
    Pair left=fast_balanced(root->left);
    Pair right=fast_balanced(root->right);
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.height)<=1 and left.balanced and right.balanced){
     p.balanced=true;
    }
    else{
        p.balanced=false;
    }
    return p;

    
 }

//  check bst or not 
bool is_bst(Node* root,int mi=INT_MIN,int mx=INT_MAX){
    // Base case
    if(root==NULL) return true;
    //recursive case
    if(root->data >=mi and root->data <=mx and is_bst(root->left,mi,root->data) and is_bst(root->right,root->data,mx)){
        return true;
    }
    else{
        return false;
    }
}

// creating a balanced tree 
int a[]={1,2,8,9,10,11,12};
int n=sizeof(a)/sizeof(int);

Node* create_tree(int s,int e){
   // base case
   if(s>e) return NULL;
    
    // recursive case 
 int  mid=(s+e)/2;
 Node* root=new Node(a[mid]);
 root->left=create_tree(s,mid-1);
 root->right=create_tree(mid+1,e);
 return root;
        
}
// convert tree into  sorted linked list
class Linkedlist{
    public:
    Node* head;
    Node* tail;
};
Linkedlist bst_ll(Node* root){
    Linkedlist l;
       // base case
       if(root==NULL){
        l.head=l.tail=NULL;
        return l;
       }
      // recursive case

    // case 1 when both root->left and root->right is null 
     if(root->left==NULL and root->right==NULL){
        l.head=l.tail=root;
        return l;
     } 

    //  case 2 when root->right is null 
     else if(root->left!=NULL and root->right==NULL){
           Linkedlist left=bst_ll(root->left);
           left.tail->right=root;
           l.head=left.head;
           l.tail=root;
           return l;
     }
    //  case 3 when root->right is null
    else if(root->left==NULL and root->right !=NULL){
         Linkedlist right=bst_ll(root->right);
         root->right=right.head;
         l.head=root;
         l.tail=right.tail;
         return l;
    } 
    else{
       
       Linkedlist left=bst_ll(root->left);
       Linkedlist right=bst_ll(root->right);
       left.tail->right=root;
       root->right=right.head;
       l.head=left.head;
       l.tail=right.tail;
       return l;
    }
}

//lowest common ancestor
Node * cmnAncestor(Node* root,int n,int m){
    // base case
    if(root==NULL) return NULL;
    if(root->data==n or root->data==m){
        return root;
    }
    // recursive case
     Node* l=cmnAncestor(root->left,n,m);
     Node* r=cmnAncestor(root->right,n,m);
    
    // case 1 if one is present on left and other is present on right 
    if(l!=NULL and r!=NULL){
          return root;
    }
    else if (l!=NULL){
         return l;
    }
    else{
        return r;
    }

}
int main(){
Node* root=NULL;
 root=create_bst();
/*
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
cout<<endl;

Level_Order_Traversal(root);
cout<<endl;
cout<<search_bst(root,19)->data<<endl;
print_range(root,7,13);
cout<<endl;
cout<<is_balanced(root)<<endl;

Pair ans=fast_balanced(root);
cout<<ans.height<<endl;
cout<<ans.balanced<<endl;
cout<<is_bst(root)<<endl;
*/
// root=create_tree(0,n-1);
// Level_Order_Traversal(root);
// cout<<endl;

// Linkedlist l=bst_ll(root);
// while(l.head){
//     cout<<l.head->data<<"->";
//     l.head=l.head->right;
// }
// cout<<endl;
cout<<is_balanced(root);
cout<<cmnAncestor(root,10,13)->data<<endl;
cout<<cmnAncestor(root,1,7)->data<<endl;

return 0;
}