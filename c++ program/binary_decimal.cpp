# include<bits/stdc++.h>
using namespace std ;
int cal_decimal(int n){
    int c=0,sum=0;
    while(n>0){
    int sum1=pow(2,c);
    sum=sum+sum1*n%10;
    n=n/10;
    c++;
    }
  cout<<sum<<endl;
  return 0;
}
 int main(){
int arr[5];
for(int i=0;i<5;i++){
    cin>>arr[i];
}
for(int i=0;i<5;i++){
    cal_decimal(arr[i]);
}
return 0;
 }