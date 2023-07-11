#include<bits/stdc++.h>
using namespace std ;
 bool is_possible(int arr[],int n,int mid){
  int student_count=1;
  int page_SUM=0;
  for(int i=0;i<4;i++)
  if(page_SUM+arr[i]<=mid){
    page_SUM+=arr[i];
  }
  else{
    student_count++;
    if(student_count>n or arr[i]>mid ){
      return false;
    }
    page_SUM=arr[i];
  }
  return true;
 }
int main(){
int arr[]={10,20,30,40};
int s=0;
int sum=0;
for(int i=0;i<4;i++){
  sum+=arr[i];
}
int e=sum;
int ans=-1;
int n=2;  //NUMBER OF STUDENT 
int m=s+(e-s)/2;
while(s<=e){
  if(is_possible(arr,n,m)){
  ans=m;
  e=m-1;
  }
  else{
    s=m+1;
  }
  m=s+(e-s)/2;
}
cout<<ans;
return 0;
}