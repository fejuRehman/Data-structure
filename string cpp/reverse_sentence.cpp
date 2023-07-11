// REVERSE A WORD eg my name is faiz
//         ANSWER IS faiz is my name
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="my name is don";
    getline(cin,s);
   
    int n=s.size();
    int i=n-1;
    while(i>=0){
         string ans="";
        while(i>=0 and s[i]!=' ')
        ans.push_back(s[i--]);
        reverse(ans.begin(),ans.end());
        cout<<ans<<" ";
        i--;
    }
}