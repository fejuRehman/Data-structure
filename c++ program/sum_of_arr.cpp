# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int n,m,k;
int carry=0;
cin>>n;
cin>>m;
k=max(n,m);
int arr1[n];
int arr2[m];
int arr3[k];
for(int i=0;i<n;i++){
    cin>>arr1[i];
}
for(int i=0;i<m;i++){
    cin>>arr2[i];
}int i=n-1;
int j=m-1;
int l=k-1;
while(l>=0){
 int sum=carry;
 if(i>=0){
    sum=sum+arr1[i];
 }
 if(j>=0){
    sum=sum+arr2[j];
 }
 carry=sum/10;
 int s=sum%10;
 arr3[l]=s;
 i--;
 j--;
 l--;

}
if(carry!=0){
    cout<<carry;
}
for(int i=0;i<k;i++){
    cout<<arr3[i];
}
return 0;
 }