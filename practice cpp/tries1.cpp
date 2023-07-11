#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std ;
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
    node* root;
    public:
    trie(){
        root=new node('\0');
    }
    void add_word(string word){
        node* cn=root;
        for(int i=0;i<word.size();i++){
            if(cn->h.count(word[i])){
                 cn=cn->h[word[i]];
            }
            else{
                node* temp=new node(word[i]);  // new node creating
                cn->h[word[i]]=temp;           // making a connection
                cn=temp;
            }
        }

    }
    bool search(string s){
        node *cn=root;
        for(int i=0;i<s[i];i++){
            if(cn->h.count(s[i])){
                cn=cn->h[s[i]];
            }
           else return true;
        
    }
    return true;
    }

};
int main(){
trie t;
t.add_word("hello");
t.add_word("don");
cout<<t.search("faiz")<<endl;
return 0;
}