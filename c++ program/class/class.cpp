#include <iostream>
using namespace std;
class employe
{
private:
  int age = 10;

public:
  char name[10] = "hello";

  void print()
  {
    cout << "my age is " << age << endl;
    cout << "my name  is " << name;
  }
  int getage()
  {
    return age;
  }
  int setage(int a)
  {
    age = a;
    //  }char getname(){
    //   return name[10];
    //  } int setname(char ch){
    //    name[10]=ch;
    //  }
  }
};

int main()
{
  employe faiz;
  // faiz.age=15;
  // faiz.name[10]="hello";
  cout << "my age is " << faiz.getage() << endl;
  faiz.setage(20);
  cout << faiz.getage() << endl;
  cout << faiz.name << endl;
  // faiz.getdata();
  // faiz.setdata(15);
  faiz.print();
  return 0;
}
