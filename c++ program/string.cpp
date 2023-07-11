# include<bits/stdc++.h>
  using namespace std ;
  char print_char_one_by_one(char c){
    cout<<c<<endl;
  }
 int main(){
// char name[]="faizur rehman";
// cout<<(int*)&name[0]<<endl;
// name[6]='*';
// cout<<name;
char name[]="faiz";
//not a good method to take input of string
// for(int i=0;i<5;i++){
//     cin>>name[i];
// }
for(int i=0;i<5;i++){
    print_char_one_by_one(name[i]);
}
cout<<&name;

return 0;
}