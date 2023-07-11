// PRINT THE POWER OF NUMBER
# include<iostream>
  using namespace std ;
int power(int n,int m){
    if( m==0){
        return 1;
    }
    int smallpower=power(n,m-1);
    return n*smallpower;
}

int main(){
int n,m;
cin>>n>>m;
int output=power(n,m);
cout<<output;
return 0;
}