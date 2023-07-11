# include<iostream>
  using namespace std ;
 int main(){
int** p= new int*[2];
for(int i=0;i<2;i++){
    p[i]=new int[2];
for(int j=0;j<2;j++){
    cin>>p[i][j];
}    
}
cout<<"the value of p is " <<p[0][1];
for(int i=0;i<2;i++){
    delete[] p[i];
}delete []p;
return 0;
}