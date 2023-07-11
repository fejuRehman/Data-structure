// PRINT THE NUMBER UPTO N
# include<iostream>
  using namespace std ;
 int printnum(int n){
    if(n==1){
       cout<<n<<" ";
       return 0;
    }printnum(n-1);
    cout<<n<<" ";

    return 0;
 } 
 int main(){
int n;
cout<<" enter the number";
cin>>n;
int output=printnum(n);


return 0;
}