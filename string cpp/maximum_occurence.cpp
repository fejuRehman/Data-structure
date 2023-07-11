#include<bits/stdc++.h>
using namespace std;
void calculate_max(int arr1[],int n){
 int max=-1;
 int ans;
 for(int i=0;i<n;i++){
    if(arr1[i]>max){
      max=arr1[i];
      ans=i;
    }
 }
 cout<<char(ans+'a')<<endl;
}
void maximum_occurrence(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
      int number=0;
        char ch=s[i];
        if(s[i]>='a' and s[i]<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }calculate_max(arr,26);
   int max=-1;
 int ans;
 for(int i=0;i<26;i++){
    if(arr[i]>max){
      max=arr[i];
      ans=i;
    }
 }
 cout<<char(ans+'a');
}
int main(){
string s;
cin>>s;
 maximum_occurrence(s);
return 0;
}