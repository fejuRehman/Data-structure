//MULTIPLY NUMBER RECURSIVELY
#include <iostream>
using namespace std;
int multiply(int n,int m,int count){
   int static sum=0;
    if(count>m){
        return 0;
    }sum=sum+n*1;
    int smallanswer=multiply(n,m,count=count+1);
    return sum;
}
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    
    int answer=multiply(n,m,1);
    cout<<answer;

    return 0;
}