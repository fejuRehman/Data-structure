#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>18)
        cout<<"they can vote becz their age is "<<age<<" which is greater than 18";
    
    else
    
       cout<<"they cannot vote becz their age is"<<age<<" which is less than 18";
    
    
    return 0;
}