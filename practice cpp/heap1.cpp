#include<bits/stdc++.h>
#include <queue>
using namespace std ;
class Heap{
    vector<int>pq;
    void heapify(int i){
      int index=i;
      int lc=2*i,rc=2*i+1;
       if(lc<pq.size() and pq[lc]<pq[i]) index=lc; 
       if(rc<pq.size() and pq[rc]<pq[i]) index=rc;
      if(index==i) return;
      else{
         swap(pq[i],pq[index]);
      
      heapify(index);
      }
    }
 public:
 Heap(){
    pq.push_back(-1);
     
 }
 // gives the minimum element or we can say top element
 int get_min(){
    if(is_empty()) return 0;
    return pq[1];
 }
 // return size of element or number of element present in a priroty queue
 int get_size(){
    return pq.size()-1;
 }
 bool is_empty(){
    return pq.size()<=1;
 }
 void insert(int data){
       pq.push_back(data);
       int c=pq.size()-1;
       int p=c/2;
       while(p>0 and pq[c]<pq[p]){
        swap(pq[p],pq[c]);
        c=p;
        p=c/2;
       }
    
 }
 void delete_element(){
   if(is_empty()) return;
    swap(pq[1],pq[pq.size()-1]);
        pq.pop_back();
        heapify(1);
 }
};
int main(){
Heap h;
h.insert(10);
h.insert(20);
h.insert(13);
h.insert(16);
h.insert(200);
cout<<h.get_size()<<endl;
//cout<<h.get_min()<<endl;
//h.delete_element();
//cout<<h.get_min()<<endl;
while(!h.is_empty()){
    cout<<h.get_min()<<endl;
    h.delete_element();
}

return 0;
}