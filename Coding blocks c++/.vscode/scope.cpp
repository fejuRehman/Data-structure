# include<bits/stdc++.h>
  using namespace std;
  int i=10;
 int main(){
int i=0;
{
    int i=10;
    cout<<i<<endl;
    cout<<:: i<<endl;// (::)this will access the global variable
    ::i++;
}

 cout<<i<<endl;
 cout<<::i<<endl;
return 0;
}