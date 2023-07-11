// write a program which takes initial value ,final value and a step value
 //and prints a table for fahrenheit to celcius
 // using formula c=5/9(f-32)
#include <iostream>
using namespace std;
int main()
{
    int celcius, fahr;

    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        celcius = (5 * (fahr - 32)) / 9;
        cout << fahr << " " << celcius << " " << endl;
    }
    return 0;
}