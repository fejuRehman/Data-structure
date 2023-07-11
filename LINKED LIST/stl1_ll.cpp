// list using stl

#include<bits/stdc++.h>
using namespace std ;
int main(){
list<int>l;
for(int i=1;i<=10;i++)
     l.push_back(i);
for(int &i:l)
    i+=10;
for(int i:l)
     cout<<i<<" "; 
cout<<endl;         
for(list<int>:: iterator it=l.begin(); it!=l.end();it++){
    cout<<&(*it)<<endl;
}    // we cant reverse print by just swaping begin and end
// to reverse print we will use this method
for( list<int>::reverse_iterator it=l.rbegin(); it!=l.rend();it++){
    cout<<(*it)<<endl;
}  
// if we want to erase
cout<<endl;
auto it=l.begin();
for(;*it !=15;it++){

}
l.erase(it);
for( auto it=l.rbegin(); it!=l.rend();it++){
    cout<<(*it)<<endl;
} 
return 0;
}  