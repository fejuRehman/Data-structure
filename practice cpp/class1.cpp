// creating a constructor
#include<bits/stdc++.h>
using namespace std ;
class student{
    public:
    int age;
    int roll_number;
    // default constructor
    student(){
        cout<<"constructor called \n";
    }
    // parametric constructor
    student(int age,int roll_number){
        this->age=age;
        this->roll_number=roll_number;

    }
   
};
int main(){
student s1(10,25);

cout<<"s1 : "<<endl;
cout<<s1.age<<" ";
cout<<s1.roll_number<<"\n";
// copy of s1 in s2 copy constructor will be called for s2
student s2(s1);
cout<<"s2 :"<<endl;
cout<<s2.age<<" ";
cout<<s2.roll_number<<endl;
student s3;
return 0;
}