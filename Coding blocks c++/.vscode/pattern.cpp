# include<iostream>
  using namespace std ;
 int main(){
int n;
cin>>n;
int c=1;
for(int a=1;a<n;a++){
    for(int j=1;j<=a;j++){
        cout<<c<<"\t";
        c=c+1;
    }
    
    cout<<endl;
} 
return 0;
}