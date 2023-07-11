# include<bits/stdc++.h>
using namespace std;
//minimum move 2^n;
int step=0;
void tower_of_hanoi(int n,char source,char target,char helper){
    if(n==0){
        return ;
    }
    tower_of_hanoi(n-1,source,helper,target);
    cout<<++step<<" move disk "<<n<<" from tower "<<source<<" to tower "<<target<<endl;
    tower_of_hanoi(n-1,helper,target,source);
}
int main(){
int n=5;
char s='A',t='C',h='B';
tower_of_hanoi(n,s,t,h);
return 0;
}