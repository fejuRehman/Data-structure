//constant variable initialiser

#include<bits/stdc++.h>
using namespace std ;
class c{
public:
const int a1;
int a2;
const int a3;

c():a1(1),a2(1),a3(1){

}
c(int b1,int b2,int b3):a1(b1),a2(b2),a3(b3){

}
};
int main(){
c o1(2,3,4);
c o2(2,3,4);
cout<<o1.a1<<endl;
cout<<o1.a2<<endl;
cout<<o1.a3<<endl;
cout<<endl;
cout<<o2.a1<<endl;
cout<<o2.a2<<endl;
cout<<o2.a3<<endl;
return 0;
}