# include<bits/stdc++.h>
  using namespace std ;
 int main(){
 int n=12345;
 int temp=n;
 int arr[15];
 int k=0;
 while(n>0){
    int m=n%10;
    arr[k]=m;
    n=n/10;
    k++;
 } int sum=0;
 for(int i=0;i<k;i=i+2){
   sum=sum+arr[i];
 }
 if(sum%4==0 ){
    cout<<"yes"<<endl;
 }else
 cout<<"NO"<<endl;
 int sum1=0;
 for(int i=1;i<k;i=i+2){
    sum1=sum1+arr[i];
 } if(sum1%3==0){
    cout<<"yes"<<endl;
 } else
 cout<<"NO";
  
return 0;
}