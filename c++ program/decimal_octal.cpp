# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int n;
cin>>n;
int arr[1000]={0};
int k=0;
while(n>0){
  int m=n%2;
  arr[k]=m;
  n=n/2;
  k++;
}
for(int i=0;i<k;i++){
  cout<<arr[k-i-1];
}

return 0;
}