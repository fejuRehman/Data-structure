// merge two sorted array
#include<bits/stdc++.h>
using namespace std ;
void merge_two_sorted(int *arr1,int n1,int *arr2,int n2){
    vector<int>v;
    int l=0;
    int r=0;
    while(l<n1 and r<n2){
        if(arr1[l]<arr2[r]){
            v.push_back(arr1[l]);
            l++;
        }
        else{
            v.push_back(arr2[r]);
            r++;
        } 
    }
    while(l<n1){
        v.push_back(arr1[l]);
        l++;
    }
    while(r<n2){
        v.push_back(arr2[r]);
        r++;
    }
    for(auto it: v){
        cout<<it<<" ";
    }
}  

int main(){

int arr1[]={1,5,8,9,11};
int n1=sizeof(arr1)/sizeof(int);
int arr2[]={2,3,6,7,11};
int n2=sizeof(arr2)/sizeof(int);
merge_two_sorted(arr1,n1,arr2,n2);

return 0;
}