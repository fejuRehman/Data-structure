# include<bits/stdc++.h>
  using namespace std ;
  void update(int *ptr){
    *ptr=100;
  }
 int main(){
int a=10;
int *ptr=&a;
update(ptr);
cout<<a<<endl;
return 0;
}