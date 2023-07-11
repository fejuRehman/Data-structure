# include<bits/stdc++.h>
  using namespace std ;
  int comb(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
      fact=fact*i;
    }
    return fact;
  }
 int main(){
int n,r;
cin>>n>>r;
int f1=comb(n);
int f2=comb(r);
int f3=comb(n-r);
cout<<(f1)/(f2*f3);

return 0;
}