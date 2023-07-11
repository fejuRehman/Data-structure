#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
vector<int>v1({1,2,3,4});
vector<int>v(2,10); //here it will set value 10 for first five bucket
                    //push back will put the element in the end of an array 
cout<<v.capacity()<<endl; //capacity will get double every time 
v.push_back(1);
cout<<v.capacity()<<endl;
v.push_back(2);
cout<<v.capacity()<<endl;
v.push_back(3);
cout<<v.capacity()<<endl;
v.push_back(4);
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
return 0;
}