// constructing  min heap
#include<bits/stdc++.h>
using namespace std;
class Heap{
    vector<int> v;
    void heapify(int i){
      int l=2*i ,r=2*i+1;
      int mi=i;
      if(l<v.size() and v[mi]>v[l]) mi=l;
      if(r<v.size() and v[mi]>v[r]) mi=r;
      if(mi==i) return;
      else{
        swap(v[i],v[mi]);
        heapify(mi);
      }

    }
    public:
    Heap(){
        v.push_back(-1);
    }
    void push(int data){
          v.push_back(data);  // pehle element daal do fir check kro 
          int c=v.size()-1;
          int p=c/2;
          while(p>0 and v[c]<v[p]){    // sbse pehle left tree fill krte h 
            swap(v[c],v[p]);
            c=p;
            p=c/2;
          }
    }
    void pop(){
        if(v.size()>1){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
        }
    }
    int size(){
     return v.size()-1;
    }
    int top(){
      if(empty()) return 0;
      return v[1];
    }
    bool empty(){
        return v.size()<=1;
    }

};
int main(){
    Heap h;
  h.push(100);
	h.push(1);
	h.push(25);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(2);
	h.push(7);
	h.push(36);
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }

return 0;
}
// MAX HEAP 
/*class Heap{
    vector<int> v;
    void heapify(int i){
      int l=2*i ,r=2*i+1;
      int mi=i;
      if(l<v.size() and v[mi]<v[l]) mi=l;
      if(r<v.size() and v[mi]<v[r]) mi=r;
      if(mi==i) return;
      else{
        swap(v[i],v[mi]);
        heapify(mi);
      }

    }
    public:
    Heap(){
        v.push_back(-1);
    }
    void push(int data){
          v.push_back(data);  // pehle element daal do fir check kro 
          int c=v.size()-1;
          int p=c/2;
          while(p>0 and v[c]>v[p]){
            swap(v[c],v[p]);
            c=p;
            p=c/2;
          }
    }
    void pop(){
        if(v.size()>1){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
        }
    }
    int size(){
     return v.size()-1;
    }
    int top(){
      if(empty()) return 0;
      return v[1];
    }
    bool empty(){
        return v.size()<=1;
    }

};
int main(){
    Heap h;
    h.push(100);
	h.push(1);
	h.push(25);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(2);
	h.push(7);
	h.push(36);
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }

return 0;
}
*/