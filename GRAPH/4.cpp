#include<bits/stdc++.h>
using namespace std ;
int main(){
set<pair<int,string>> s;
s.insert(make_pair(1,"apple"));
s.insert(make_pair(4,"banana"));
s.insert(make_pair(3,"pineapple"));
s.insert(make_pair(5,"pine apple"));
s.insert(make_pair(3,"apple"));
for(auto a:s){
    cout<<a.first<<" "<<a.second<<endl;
}
return 0;
}