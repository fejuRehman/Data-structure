#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
    string key;
    int value;
    node* next;
    node(string k,int v):key(k),value(v),next(0){}
};
class hash_map{
    int cs,ts,prm;
    node** table;
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
            hi%=ts;
            factor%=ts;
        }
        return hi;
    }
    void rehash(){
        int os=ts;
        node**OldTable=table;
        ts*=2;
        table=new node*[ts];
        reset();
        for(int i=0;i<os;i++){
            node* head=OldTable[i];
            while(head){
                insert(head->key,head->value);
                node* temp=head;
                head=head->next;
                delete temp;
            }
        }
        delete[]OldTable;
    }
    public:
    hash_map(){
        cs=0;
        ts=7;
        table=new node*[ts];
        prm=13;
        reset();
    }
    node* search(string key){
        int hi=hash_fun(key);
        node* head=table[hi];
        while(head){
            if(head->key==key) return head;
             head=head->next;
        }
        return head;
    }
    void insert(string key,int val){
        node* temp=search(key);
        if(temp) return;
        int hi=hash_fun(key);
        temp=new node(key,val);
        temp->next=table[hi];
        table[hi]=temp;
        if(cs>ts*0.6){
            rehash();
        }
    }
    int Delete(string k){
          int hashindex=hash_fun(k);
          node* head=table[hashindex];
          node* prev=NULL;
          while(head!=NULL){
            if(head->key==k){
            if(prev==NULL){
                table[hashindex]=head->next;
            }
            else {
             prev->next=head->next;
            }
            int val=head->value;
                head->next=NULL;
                delete head;
                cs--;
                return val;

            }
            prev=head;
            head=head->next;
          }
          return 0;
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
    }
};
int main(){
 hash_map h;
//  h.insert("apple",100);
//  h.insert("mango",200);
//  h.insert("orange",100);
//  h.insert("guava",100);
 //h.print();
    h.insert("Apple", 50);
	h.insert("Banana", 150);
	//h.print();
	h.insert("Pineapple", 150);
	h.insert("Watermelon", 150);
	h.insert("Grapes", 150);
	h.insert("Banana", 150);
	//h["Mango"] = 188;
	//h.print();
    cout<<endl;
    cout<<h.search("Apple")->value<<endl;
    cout<<h.Delete("Apple")<<endl;
    h.print();
    
return 0;
}