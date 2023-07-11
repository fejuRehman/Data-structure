/* FOR EACH LOOP 
SYNTAX 
eg vector<int>v
for(int i: v);
*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
vector<int >v;
for(int i=10;i<=20;i++){
    v.push_back(i);
}
// for each loop  
//we cant change the value using for each loop
// if we want to change the value then we have to use & operator
// for(int &i:v){
//     i+=10;
//     //cout<<i<<" ";
// }
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}