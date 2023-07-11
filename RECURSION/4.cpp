// print subsequence of an array and string
#include<bits/stdc++.h>
#include<cstring>
using namespace std ;
void print_sub_arr(int i,vector<int>&v,int *arr,int n){
       if(i>=n){
        int sum=0;
        for(auto i:v)
             sum+=i;
           if(sum==3){ 
             for(auto i:v){
              cout<<i<<" ";
        } cout<<endl;
           }
           return;
       }
    // include
    v.push_back(arr[i]);
    print_sub_arr(i+1,v,arr,n);
    v.pop_back();
    // not take or exclude
    print_sub_arr(i+1,v,arr,n);  
} 
// if only want to print one value then we will do this type
bool print_sub_arr2(int i,vector<int>&v,int *arr,int n,int sum){
    if(i>=n){
        if(sum==5){
             for(auto i:v) cout<<i<<" ";
             return true;
        }   
        else return false;   
    }
    
    // include
    sum+=arr[i];
    v.push_back(arr[i]);
    if(print_sub_arr2(i+1,v,arr,n,sum)) return true;

    sum-=arr[i];
    v.pop_back();

    // not take or exclude
    if(print_sub_arr2(i+1,v,arr,n,sum)) return true;
    return false;
} 

// count no of possible solution 
int print_sub_arr3(int i,int *arr,int n,int sum){
    if(i>=n){
        if(sum==3){
             return 1;
        }   
        else return 0;   
    }   
    // include
    sum+=arr[i];
   // v.push_back(arr[i]);
    int l=print_sub_arr3(i+1,arr,n,sum);
    sum-=arr[i];
    //v.pop_back();

    // not take or exclude
    int r=print_sub_arr3(i+1,arr,n,sum);
    return l+r;
} 

void print_sub_str(int i,vector<int>&v,string s,int n){
    if(i>=n){
        for(auto i:v){
            cout<<char(i)<<" ";
    }cout<<endl;
        return;
    }
    v.push_back(s[i]);
    print_sub_str(i+1,v,s,n);
    v.pop_back();
    print_sub_str(i+1,v,s,n);

}
int main(){
int arr[]={2,3,6,7,1};
int n=sizeof(arr)/sizeof(int);
vector<int>v;
string s="abc";
vector<int>str;
cout<<endl;
//print_sub_str(0,str,s,s.size());
print_sub_arr(0,v,arr,n);
//cout<<endl;
//print_sub_arr2(0,v,arr,n,0);
//cout<<endl;
cout<<print_sub_arr3(0,arr,n,0);

return 0;
}