# include<bits/stdc++.h>
  using namespace std ;
void print_words(int n){
  string digit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return ;
    }
    int ud=n%10;
    print_words(n/10);
    cout<< digit[ud]<<" ";
}



 int main(){
int n=2048;
print_words(n);
return 0;
}