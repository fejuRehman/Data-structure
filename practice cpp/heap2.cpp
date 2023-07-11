#include<bits/stdc++.h>
#include<queue>
using namespace std ;
int main(){
priority_queue<int>Pq; // INBUILT MAX HEAP
cout<<endl;   
priority_queue<int,vector<int>,greater<int>>pq; // min heap
pq.push(20);
pq.push(200);
pq.push(120);
pq.push(30);
pq.push(2);
cout<<pq.size()<<endl;
while(!pq.empty()){
   cout<<pq.top()<<" ";
   pq.pop();
}
return 0;
}