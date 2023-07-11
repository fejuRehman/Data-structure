/*iterator in hashmap
  syntax
  unorderd_map<>::iterator it
  */
 #include<bits/stdc++.h>
 using namespace std ;
 int main(){
 unordered_map<string,int>ourmap;
 ourmap["abc0"]=10;
 ourmap["abc1"]=30;
 ourmap["abc2"]=50;
 ourmap["abc3"]=20;
 ourmap["abc4"]=400;
 // iterator
 unordered_map<string,int>::iterator it=ourmap.begin();
 while(it!=ourmap.end()){
   cout<<"Key : "<<it->first<<"  ->  "<<"Value : "<<it->second<<endl;
   it++;
 }



// find---> it will give me the iterator 
unordered_map<string,int>::iterator it2=ourmap.find("abc");
ourmap.erase(it2);


 // iterator for vector
 vector<int>v;
 v.push_back(1);
 v.push_back(3);
 v.push_back(5);
 v.push_back(7);

vector<int>::iterator it1=v.begin();
while(it1!=v.end()){
     cout<<*it1<<" ";
     it1++;
}

 return 0;
 }