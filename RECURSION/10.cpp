// permutation of an array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// method 1 which is taking extra space
void print_permutaion(vector<int>&arr,vector<int>&v,unordered_map<int,bool>&h){
     // base case
      if(v.size()==arr.size()){
        for(auto i:v) cout<<i<<" ";
        cout<<endl;
        return;
      }
     // recursive case
     for(int i=0;i<arr.size();i++){
        if(!h[i]){
            h[i]=true;
            v.push_back(arr[i]); 
            print_permutaion(arr,v,h);
            h[i]=false;
            v.pop_back();
        }
     }
}// method 2 optimize method not taking extra space
void print_permu(int id,vector<int>&arr){
         // base case
        if(id==arr.size()){
            for(auto i:arr) cout<<i<<" ";
            cout<<endl;
            return;
            
        }
         // recursive case
         for(int i=id;i<arr.size();i++){
            swap(arr[id],arr[i]);   
            print_permu(id+1,arr);
           swap(arr[id],arr[i]);   
         }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int>arr;
    unordered_map<int,bool>h;
    int p=0;
   print_permu(0,v);


}
