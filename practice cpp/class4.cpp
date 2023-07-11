//copy constructor
#include<bits/stdc++.h>
using namespace std ;
class student{
    int age;
    char* name;
    public:
    student(int age,char* name){
      this->age=age;
      //shallow copy
      //this->name=name;
      // deep copy
     this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    }
    // copy constructor
    student(student &s){
    this->age=s.age;
    this->name=new char[strlen(name)+1];
    strcpy(this->name,s.name);
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }  
};
int main(){
char name[]="abcd";
student s1(20,name);
s1.display();
student s3(s1); // agr copy constructor bnana h to uske beech me dusra object nhi hona chahihye
s3.display();
s1.display();
 name[3]='e';
student s2(25,name);
s1.display();
s2.display();
return 0;
}