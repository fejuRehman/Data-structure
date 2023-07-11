// maximum xor pair
#include<bits/stdc++.h>
using namespace std ;
// brurte force approch
int max_xor(int* arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int cx=arr[i]^arr[j];   //cx = current xor
            if(cx>max) max=cx;
        }
    }
    return max;
}
class node{
    public:
    int number;
    node* left;
    node* right;
    node(int n=-1):number(n),left(0),right(0){};

};
class trie{
  node* root;
  public:
  trie(){
    root=new node();
  }
  void insert(int n){
    node* cn=root;
    for(int i=31;i>=0;i--){
        int bit=n&(1<<i);
        if(bit){
            if(cn->right)
                cn=cn->right;
            else{
                cn->right=new node();
                cn=cn->right;
            }
            

        }
        else{
            if(cn->left)
                cn=cn->left;
            else{
                cn->left=new node();
                cn=cn->left;
            }
           
        }
    }
    cn->number=n;
  }
  int max_xor_helper(int n){
    node* cn=root;
        int bit=n&(1<<31);
        if(bit){
            if(cn->right)cn=cn->right;
            else  cn=cn->left;      
        }
        else
            if(cn->left)  cn=cn->left;
            else cn=cn->right;
        
    for(int i=30;i>=0;i--){
        int bit=n&(1<<i);
        if(bit){
            if(cn->left)
                cn=cn->left;
            else
                cn=cn->right;
        }
        else{
            if(cn->right)
                cn=cn->right;
            else
                cn=cn->left;
        }
    }
    return n^(cn->number);
  }
  int max_xor_pair(int *arr,int n){
    int ans=INT_MIN;
    insert(arr[0]);
    for(int i=1;i<n;i++){
        insert(arr[i]);
        ans=max(ans,max_xor_helper(arr[i]));
    }
    return ans;
  }
};
int main(){
   int arr[]={-1,-2};
   int n=sizeof(arr)/sizeof(int);
   cout<<max_xor(arr,n)<<endl;
   trie t;
   cout<<t.max_xor_pair(arr,n)<<endl;
return 0;
}