// print all the subset all subset should be unique
#include<bits/stdc++.h>
using namespace std ;
void print_all_unique_subset(int id,int target,vector<int>&arr,vector<int>&v){
    // base case
    if(target==0){
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
        return;
    }
     //recursive case
    for(int i=id ;i<arr.size();i++){
        if(i>id and arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        v.push_back(arr[i]);
        print_all_unique_subset(i+1,target-arr[i],arr,v);
        v.pop_back();
    }
}
int main(){
vector<int>arr;
arr.push_back(10);
arr.push_back(1);
arr.push_back(2);
arr.push_back(7);
arr.push_back(6);
arr.push_back(1);
arr.push_back(5);
sort(arr.begin(),arr.end());
vector<int>ans;
print_all_unique_subset(0,8,arr,ans);


return 0;
}