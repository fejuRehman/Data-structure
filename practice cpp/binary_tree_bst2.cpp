#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node():data(-1),left(0),right(0){}
    node(int data):data(data),left(0),right(0){}
};
node* tree_helper(int* In,int* pre,int InS,int InE,int preS ,int preE){
    if(InS>InE)return 0;
    int rootdata=pre[preS];
    int rootindex=-1;
    for(int i=InS;i<=InE;i++){
        if(In[i]==rootdata){
            rootindex=i;
            break;
        }
    }
    int lInS=InS;
    int lInE=rootindex-1;
    int lpreS=preS+1;
    int lpreE=lpreS+lInE-lInS;
    int rInS=rootindex+1;
    int rInE=InE;
    int rpreS=lpreE+1;
    int rpreE=preE;
    node* root=new node(rootdata);
    root->left=tree_helper(In,pre,lInS,lInE,lpreS,lpreE);
    root->right=tree_helper(In,pre,rInS,rInE,rpreS,rpreE);
    return root;
}
node* build_tree(int* in,int* pre,int size){
    return tree_helper(in,pre,0,size-1,0,size-1);
}
void preorder(node* root){
    // base case
    if(!root) return;
    //recursive case
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}

int main(){
int in[]={4,2,5,1,8,6,9,3,7};
int pre[]={1,2,4,5,3,6,8,9,7};
node* root=build_tree(in ,pre,9);
preorder(root);
return 0;
}