#include<bits/stdc++.h>
#include<queue>
using namespace std ;
void k_sorted_arr(int arr[],int n,int k){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    int j=0;
    for(int i=k;i<n;i++){  
        arr[j]=pq.top();
        pq.pop();
        pq.push(arr[i]);
        j++;
    }
    // priority queue me abhi bhi n-k element bche h jo sorted nhi h 
    while(!pq.empty()){
        arr[j++]=pq.top();
        pq.pop();
    }
}
int main(){
int arr[]={12,15,6,7,9};
int n=sizeof(arr)/sizeof(int);
k_sorted_arr(arr,n,3);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}