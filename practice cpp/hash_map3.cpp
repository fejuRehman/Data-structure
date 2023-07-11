// remove duplicate in an array
#include<bits/stdc++.h>
using namespace std ;
vector<int> remove_duplicates(int* arr,int size){
    vector<int>output;
    unordered_map<int,bool>ourmap;
    for(int i=0;i<size;i++){
        if(ourmap.count(arr[i])>0){
            continue;
        }
          ourmap[arr[i]]=true;
         output.push_back(arr[i]);

    }
    return output;
}
int main(){
 int arr[]={1,2,1,3,2,4,5,6,1,7,3};
 int size=11;
 vector<int>output=remove_duplicates(arr,size);
for(int i=0;i<output.size();i++){
    cout<<output[i]<<" ";
}
return 0;
}