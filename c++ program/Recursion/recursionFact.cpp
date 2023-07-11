// PRINT THE FACTORIAL OF A NUMBER
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    //int smalloutput = factorial(n - 1);
    return n * factorial(n - 1); // ham n*smalloutput bhi likh skte h

}
int main()
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << "the factorial of number " << n << " is " << output << endl;
    return 0;
}