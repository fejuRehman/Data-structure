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
node* create_binary(){
    int data;
    cin>>data;
    // base case
    if(data==-1) return 0;
    // recursive case
    node* root=new node(data);
    root->left=create_binary();
    root->right=create_binary();
    return root;
}
node* level_order_creating(){
    cout<<"Enter the root node:\n ";
    int data;
    cin>>data;
    node* root=new node(data);
    queue<node* >q;
    q.push(root);
    while(!q.empty()){
        node* current=q.front();
        q.pop();
        cout<<"Enter the children for: "<<current->data<<endl;
        int l,r;
        cin>>l>>r;
        if(l!=-1){
            current->left=new node(l);
            q.push(current->left);
        }
        if(r!=-1){
            current->right=new node(r);
            q.push(current->right);
        }
    }
    return root;

}
void preorder(node* root){
    // base case
    if(!root) return;
    // recursive case
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node* root){
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
void levelorder(node* root){
    queue<node* >q;
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
        if(current->left)
        q.push(current->left);
        if(current->right) q.push(current->right);
        cout<<current->data<<" ";
    }
}
void right_view_helper(node* root,int cl,int& ml){
    // base case
     if(!root) return;
     if(cl>ml){
        cout<<root->data<<" ";
        ml=cl;
     }
    // recursive case
    right_view_helper(root->right,cl+1,ml);
    right_view_helper(root->left,cl+1,ml);
}    
void right_view(node* root){
    int cl=0;
    int ml=-1;
    right_view_helper(root,cl,ml);
}    
int count_node(node* root){
    // base case
    if(!root) return 0;
    // recurive case
    return count_node(root->left)+count_node(root->right)+1;
}
int height_tree(node* root){
    // base case
    if(!root) return 0;
    // recursive case
    return max(height_tree(root->left),height_tree(root->right))+1;
}
class Pair{
    public:
    int h;
    int d;
   
};
Pair diameter_helper(node* root){
   Pair curr;
    if(root==NULL){
    
    curr.h=0;
    curr.d=0;
    return curr;
   }
   Pair l=diameter_helper(root->left);
   Pair r=diameter_helper(root->right);
   curr.h=1+max(l.h,r.h);
   curr.d=max((l.h+r.h),max(l.d,r.d));
   return curr;



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
int main(){
/*node root=create_binary();  //8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
*/
//node* root=level_order_creating();
node* root=create_binary();
levelorder(root);
cout<<endl;
right_view(root);
cout<<endl;
cout<<"NODE : "<<count_node(root)<<endl;
cout<<"HEIGHT :"<<height_tree(root)<<endl;
cout<<"DIAMETER :"<<diameter_tree(root)<<endl;
Pair P=diameter_helper(root);
cout<<"DIAMETER :"<<P.d<<endl;

return 0;
}