// complex number
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    Complex(int r, int i){
        real=r;
        imaginary=i;
    }
    void add(Complex const &s)
    {
        real = real + s.real;
        imaginary = imaginary + s.imaginary;
    }
    void print()
    {
        cout << real << "+" << imaginary << "i";
    }
};
int main()
{
    Complex s1(2, 3);
    Complex s2(3, 4);
    s1.add(s2);
    s1.print();

    return 0;
}