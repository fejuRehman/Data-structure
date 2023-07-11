//2-d array using vector
#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main(){
vector<vector<int> >v;
vector<int>v1;
v1.reserve(10);// without this also it will work
v.push_back(v1);
v[0].push_back(100);
cout<<v[0][0]<<endl;
return 0;
}