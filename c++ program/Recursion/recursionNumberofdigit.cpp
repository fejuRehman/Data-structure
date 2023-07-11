//PRINT THE NUMBER OF DIGIT 
#include <iostream>
using namespace std;
int printnumber(int n)
{
    int static sum = 0;
    if (n != 0)
    {
        sum = sum + 1;

        printnumber(n / 10);
    }

    return sum;
}
int main()
{
    int n;
    cin >> n;
    int output = printnumber(n);
    cout << output;
    return 0;
}