// coding ninja
#include<bits/stdc++.h>
#include<vector>
using namespace std ;
template<typename T>
class Treenode{
public:
T data;
vector<Treenode<T>* >children;
Treenode(T data){
    this->data=data;
  }
};
Treenode<int>*TakeInputLevelWise(){
    int rootdata;
    cout<<"Enter root data"<<endl;
    cin>>rootdata;
    Treenode<int>* root=new Treenode<int>(rootdata);
    queue<Treenode<int>*>pendingnode;
    pendingnode.push(root);
    while(pendingnode.size()!=0){
        Treenode<int>* current=pendingnode.front();
        pendingnode.pop();
        cout<<"Enter the no of children for "<<current->data<<endl;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<"Enter the "<<i<< " children of "<<current->data<<endl;
            int c;
            cin>>c;
            Treenode<int>*child=new Treenode<int>(c);
            pendingnode.push(child);
            current->children.push_back(child);
        }
    }
    return root;
}
Treenode<int>* take_input(){
    cout<<"Enter data"<<endl;
    int rootnode;
    cin>>rootnode;
    Treenode<int>*root=new Treenode<int>(rootnode);
    cout<<"Enter the no of children of "<<rootnode<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Treenode<int>* child=take_input();
        root->children.push_back(child);
    }
    return root;
}
void print_tree(Treenode<int>* root){
   // ye base case nhii h just root khaali to nhi h ye check krne k liye h
    if(root==NULL) return;
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print_tree(root->children[i]);
    }
}
int NumberOFnodes(Treenode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
       ans+= NumberOFnodes(root->children[i]);
    }
    return ans;
}
void all_node_at_depth_d(Treenode<int>* root,int cl,int d){
    if(root==NULL) return;
    if(d==0){
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size();i++)
      all_node_at_depth_d(root->children[i],cl,d-1);
    
     /* 1st method
     if(d==cl) cout<<root->data;
    for(int i=0;i<root->children.size();i++){
        all_node_at_depth_d(root->children[i],cl+1,d);
    }
    */
}
int count_leaf_node(Treenode<int>* root){
    if(root==NULL) return 0;
    if(root->children.size()==0) return 1;
    static int count=0;
    for(int i=0;i<root->children.size();i++){
     count+= count_leaf_node(root->children[i]);
    }
    return count;     
    
}
int main(){
   /* Treenode<int>* root= new Treenode<int>(1);
    Treenode<int>* node1= new Treenode<int>(2);
    Treenode<int>* node2= new Treenode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    Treenode<int>* root=TakeInputLevelWise();
    print_tree(root); 
    cout<<NumberOFnodes(root)<<endl;
    //all_node_at_depth_d(root,0,2);
    cout<<count_leaf_node(root);

return 0;
}