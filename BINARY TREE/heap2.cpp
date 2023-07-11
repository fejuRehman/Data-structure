// heap using stl
#include<bits/stdc++.h>
#include<queue>
using namespace std ;
class comparator{
    public:
    bool operator()(int a,int b){
         return a>b;
    }
};
int main(){
priority_queue<int,vector<int>,comparator>min_h; // min heap    
priority_queue<int>max_h;  // max heap
int arr[]={1,4,34,54,20,7,36,29,36,74,100};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    max_h.push(arr[i]);
}
while(!max_h.empty()){
    cout<<max_h.top()<<" ";
    max_h.pop();
} 
cout<<endl;
for(int i=0;i<n;i++){
    min_h.push(arr[i]);
}
while(!min_h.empty()){
    cout<<min_h.top()<<" ";
    min_h.pop();
}
return 0;
}