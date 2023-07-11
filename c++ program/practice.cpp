# include<iostream>;
  using namespace std ;
 int main(){
int a[]={1,2,4,5,6};
int (&p)[5]=a;
for(int i=0;i<5;i++)
cout<<"the value of x "<<i<< " is "<<*p+i<<endl;
return 0;
}