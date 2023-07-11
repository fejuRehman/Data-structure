# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int n=121;
int c=n;

int sum=0;
for(int i=2;i<n*n;i=i+1){
    for(int j=-1;j<n;j++){
        if(i==c){
            continue;
        }
        if(n%i==0){
            cout<<i<<endl;
          sum=sum+i;
            n=n/i;
        }
    }
}cout<<sum;
return 0;
}