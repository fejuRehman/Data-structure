#include<bits/stdc++.h>
#include<vector>
using namespace std ;
void reverse(vector<int> &temp,int n){
int s=0;
int e=n-1;
while(s<=e){
    swap(temp[s],temp[e]);
  s++;
  e--;
}
}
int main(){
vector<int>v({1,2,3,4});
reverse(v,v.size());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}