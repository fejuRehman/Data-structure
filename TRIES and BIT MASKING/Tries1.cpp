// Tries implementation
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    char ch;
    unordered_map<char,node*>h;
    bool is_word_ending;
    node(char ch,bool iwe=false){
        this->ch=ch;
        is_word_ending=iwe;
    }
};
class trie{
    public:
   node* root;
   trie(){
     root=new node('\0');
   }

   void add_word(string s){
    node* cn=root;
    for(int i=0;s[i];i++){
        if(cn->h.count(s[i])==0){
           node* temp=new node(s[i]);
           cn->h[s[i]]=temp;
        }
        cn=cn->h[s[i]];
    }
    cn->is_word_ending=true;
}

   bool check_present(string s){
    node* cn=root;
    for(int i=0;i<s.size();i++){
        if(cn->h.count(s[i])==0){
            return false;
        }
        cn=cn->h[s[i]];
    }
    return cn->is_word_ending;
   }
   void add_multiple(){
    string input;
    cin>>input;
    while(input!="$end$"){
        add_word(input);
        cin>>input;
    }
   }
};
int main(){
trie  t;
t.add_multiple();
if(t.check_present("faiz")){
    cout<<"FOUND"<<endl;
}
else cout<<"not found"<<endl;

return 0;
}