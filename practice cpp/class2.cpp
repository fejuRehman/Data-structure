// creating fraction
#include<bits/stdc++.h>
using namespace std ;
class fraction{
private:
        int numerator;
        int denominator;
 public:
    fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void simplify(){
        int gcd=1;
        int n=min(numerator,denominator);
        for(int i=1;i<=n;i++){
            if(numerator%i==0 and denominator%i==0){
                gcd=i;
            }
        }
        numerator=numerator/gcd;
        denominator=denominator/gcd;
    }
    void add(fraction const &s2){
     int lcm=denominator*s2.denominator;
     int num1=numerator*s2.denominator;
     int num2=denominator*s2.numerator;
     numerator=num1+num2;
     denominator=lcm;
     simplify();
    }
    void print(){
        cout<<numerator<<"/"<<denominator;
    }        
};
int main(){
fraction s1(3,4);
fraction s2(4,6);
s1.add(s2);
s1.print();

return 0;
}