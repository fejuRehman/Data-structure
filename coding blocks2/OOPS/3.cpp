//static data member
//static member have same address for all the object if we change the value of one object all object value get automatically changed
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std ;
class c{
public:
const int a1;
int a2;
const int a3;
static int count;

c():a1(1),a2(1),a3(1){
count++;
}
c(int b1,int b2,int b3):a1(b1),a2(b2),a3(b3){
count++;
}
};
int  c:: count=0; //we cant declare this in main function but we can initialise this in function 
int main(){
c o1(1,1,1);
c o2(2,2,2);
c o3(3,3,3);
c o4(4,4,4);
cout<<o1.count<<endl;
cout<<o2.count<<endl;
cout<<o3.count<<endl;
cout<<o4.count<<endl;
return 0;
}