# include<bits/stdc++.h>
  using namespace std ;
  void increasing_sequence(int n){
    if(n==0){
        cout<<endl;
        return;
    }cout<<n;
    //cout<<endl;
    increasing_sequence(n-1);
    cout<<n;
  }

 int main(){
int n;
cin>>n;
increasing_sequence(n);
    //cout<<decresing_sequence(i);

return 0;
}