#include<bits/stdc++.h>
using namespace std;
char convert_lowercase(char ch){
    if(ch>'a' and ch<'z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}



bool check_palindrome(char arr[],int n){
int s=0;
int e=n-1;
while(s<=e){
    if(convert_lowercase(arr[s])!=convert_lowercase(arr[e])){
        return 0;
    }
    else{
        s++;
        e--;
    }
}
return 1;
}
int getlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
    }

int main(){
char str[20];
cin>>str;
int m=getlength(str);
cout<<check_palindrome(str,m);
return 0;
}