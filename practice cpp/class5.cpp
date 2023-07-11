// Operator overloading
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
    fraction add(fraction const &f2){
     int lcm=denominator*f2.denominator;
     int num1=numerator*f2.denominator;
     int num2=denominator*f2.numerator;
     //numerator=num1+num2;
     //denominator=lcm;
     fraction fnew(num1+num2,lcm);
     fnew.simplify();
     return fnew;
    }
    // Operator plus overloading
    fraction operator+(fraction const &f2){
     int lcm=denominator*f2.denominator;
     int num1=numerator*f2.denominator;
     int num2=denominator*f2.numerator;
     //numerator=num1+num2;
     //denominator=lcm;
     fraction fnew(num1+num2,lcm);
     fnew.simplify();
     return fnew;
    }
    // operator multiply
    fraction operator*(fraction const &f2){
        numerator=numerator*f2.numerator;
        denominator=denominator*f2.denominator;
        fraction fnew(numerator,denominator);
        fnew.simplify();
        return fnew;
    }
    // operator pre-increment
    // void operator++(){
    //     numerator=numerator+denominator;
    //     simplify();
    // }
    fraction& operator++(){
        numerator=numerator+denominator;
        simplify();
        return *this;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }  
    // post increment i++ we have to write int to differentiate between post and pre increment
    fraction operator++(int){
        fraction fnew(numerator,denominator);
        numerator=numerator+denominator;
        simplify();
        return fnew;
    }      
};
int main(){
fraction f1(2,3);
fraction f2(3,4);
/*
fraction f3=f1.add(f2);
//f1.print();
f2.print();
f3.print();
fraction f4=f1+f2;
f4.print();
fraction f5=f1*f2;
f5.print();
++f1;
 f1.print();
 fraction f6=++f1;
f1.print();
f6.print();
*/
f1.print();
fraction f7=f1++;
f1.print();
f7.print();
return 0;
}