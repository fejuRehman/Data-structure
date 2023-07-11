/* key==string,float,bool
value can be anything
hash function==submation of s[i]*pn^i%(size of array)
table size and prime number should be different
*/
#include<bits/stdc++.h>
using namespace std ;
class node{
public:
     string key;
     int value;
     node* next;
     node(string k,int val):key(k),value(val),next(0){}
};
class hash_map{
    int cs, ts,prm;
    node**table;
    void reset(){
        cs=0;
        for(int i=0;i<ts;i++){
            table[i]=0;
        }
    }
    int hash_fun(string key){
       int hi=0;
       int factor=1;
       for(int i=0;i<key.size();i++){
        hi+=(key[i]*factor)%ts;
        factor*=prm;
        hi=hi%ts;
        factor=factor%ts;
       }
       return hi;
    }
    void rehash(){
        int os=ts;
        node**oldtable=table;
        ts*=2;
        table=new node*[ts];
        reset();
        for(int i=0;i<os;i++){
            node*head=oldtable[i];
            while(head){
                insert_key(head->key,head->value);
                node* temp=head;
                head=head->next;
                delete temp;
            }
        }
        delete[]oldtable;
    }
    public:
    hash_map(){
        cs=0;
        ts=7;
        table=new node*[ts];
        reset();
        prm=13;
    }
    node* search_key(string key){
        int hi=hash_fun(key);
        node* head=table[hi];
        while(head){
            if(head->key==key) return head;
            head=head->next;
        }
        return head;
    }
    void insert_key(string key,int val){
         node* temp=search_key(key);
         if(temp) return;
         int hi=hash_fun(key);
         temp=new node(key,val);
         temp->next=table[hi];
         table[hi]=temp;
         cs++;
         if(cs>ts*0.6){
            rehash();
         }
    }
    void print(){
        cout<<"Table is as follows:\n";
		for(int i = 0; i < ts; i++){
			node * head = table[i];
			cout<<i+1<<"-> ";
			while(head){
				cout<<"("<< head -> key<<" "<<head -> value<<") ";
				head = head -> next;
			}
			cout<<endl;
		}
		cout<<endl;
        /*for(int i=0;i<ts;i++){
            node* head=table[i];
            while(head){
                cout<<head->key<<" "<<head->value;
                head=head->next;
            }
            cout<<endl;
        }*/
    }
};
int main(){
hash_map h;
// h1.insert_key("APPLE",100);
// h1.insert_key("banana",200);
// h1.insert_key("manago",300);
// h1.insert_key("watermelon",500);
// h1.insert_key("guava",400);
h.insert_key("Mango", 100);
	h.insert_key("Apple", 50);
	h.insert_key("Banana", 150);
	h.insert_key("Pineapple", 150);
	h.insert_key("Watermelon", 150);
	h.insert_key("Grapes", 150);
	h.insert_key("Banana", 150);
h.print();

return 0;
}