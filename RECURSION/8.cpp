// target pair all combination including repeating
#include<bits/stdc++.h>
using namespace std;
void PrintCombination(int i,vector<int>&v,int *arr,int n,int target){
   // base case
   if(i==n){
    if(target ==0){
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
    }
    return;
   }
    
    // pick the element and check all possible communication
    if(arr[i]<=target){
    v.push_back(arr[i]);
    PrintCombination(i,v,arr,n,target-arr[i]);
    v.pop_back();
    }

    // not take or exclude
    PrintCombination(i+1,v,arr,n,target);
   
} 
int main(){
int arr[]={2,3,6,7};
int n=sizeof(arr)/sizeof(int);
vector<int>v;
int target=9;
PrintCombination(0,v,arr,n,target);
return 0;
}