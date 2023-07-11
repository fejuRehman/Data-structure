# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int n,m,count=0;
int sum;
cin>>n;
cin>>m;
for(int i=1;i<=10+count;i=i+1){
 sum=3*i+2;
 if(sum%m==0){
  count++;
  continue;
 }
 cout<<sum<<endl;
}
return 0;
}