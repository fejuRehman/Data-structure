#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main(){
vector<int>v;
v.reserve(10);             //it will allot 10 bucket of integet
cout<<v.size()<<endl;      //here we will get size 0 because we have not inserted any input
cout<<v.capacity()<<endl;  //here we will get 10 because we reserve 10 bucket
for(int i=0;i<v.capacity();i++){
   v[i]=i+1;
   cout<<v[i]<<" ";
}
cout<<endl;
cout<<v.size()<<endl; //here we will get size =0 because vector only consider input when we use push_back 
cout<<v.capacity()<<endl; //capacity is 10
for(int i=0;i<v.capacity();i++){
    v.push_back(i+10);
    cout<<v[i]<<" ";
}cout<<endl;
cout<<v.size()<<endl; //here we will get size 10 
cout<<v.capacity()<<endl;//capacity is also 10
v.push_back(20);
cout<<v.size()<<endl;  //size becomes 11
cout<<v.capacity()<<endl; //capacity get doubled and becomes 20
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
for(int i=0;i<11;i++){
 cout<<v[i]<<" ";             //here we will get actual +deleted element
}cout<<endl;
for(int i=0;i<v.size();i++){ 
 cout<<v[i]<<" ";             //we will get actual element 
}cout<<endl;
cout<<v.size()<<endl;         //size becomes 7
cout<<v.capacity()<<endl;     //capaciy is 20
v.reserve(21);
cout<<v.size()<<endl;  //size is same
cout<<v.capacity()<<endl;//capacity becomes 21


return 0;

}