// write a program which takes initial value ,final value and a step value
 //and prints a table for fahrenheit to celcius
 // using formula c=5/9(f-32)

# include<bits/stdc++.h>
  using namespace std ;
  int celciusconverter(int initial,int final,int step){
    for(int i=initial;i<=final;i=i+step){
        cout<<i <<" "<<(5*(i-32))/9<<endl;
    }
  }
  
 int main(){
celciusconverter(0,300,20);
return 0;
}