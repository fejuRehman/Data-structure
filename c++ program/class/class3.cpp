#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sumcomplex(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printcomplex()
    {
        std::cout << "the complex number is " << a << "+" << b <<"i" <<endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 3);
    c1.printcomplex();
    c2.setdata(2, 4);
    c2.printcomplex();
    c3.sumcomplex(c1, c2);
    c3.printcomplex();

    return 0;
}