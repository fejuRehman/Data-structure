#include<bits/stdc++.h>
using namespace std ;
int main(){
auto i=10;
cout<<sizeof(i)<<endl;
list <int> l;
for(int i=1;i<=10;i++)
     l.push_back(i);
for(auto &i:l)
    i+=10;
for(auto i:l)
     cout<<i<<" "; 
return 0;
}