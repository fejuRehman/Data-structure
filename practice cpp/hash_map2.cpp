/* coding ninja
 inbuilt hashmap is present in unorderde_map folder  
 */
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std ;
int main(){
unordered_map<string,int>ourmap;
// there are two ways to insert in hashmap 
//1. hashmap is taking input in form of pair
pair<string,int>p("Apple",120);
ourmap.insert(p);
//2. we can directly assign value like an array
ourmap["Banana"]=250;
// there are two ways to acces or find an element 
cout<<ourmap["Apple"]<<endl;
cout<<ourmap.at("Apple")<<endl;
//cout<<ourmap.at("orange")<<endl; // in this line we are getting error bcz element is not present
cout<<ourmap["orange"]<<endl;   // in this line we will not get any error instead of it will insert zero 
// presence of element
if(ourmap.count("Apple")>0){
 cout<<"Element is present"<<endl;
}
// size of element;
cout<<"Size: "<<ourmap.size()<<endl;
// erase elememt
ourmap.erase("orange");
cout<<"Size: "<<ourmap.size()<<endl;
if(ourmap.count("orange")>0){
 cout<<"Element is present"<<endl;
}

return 0;
}