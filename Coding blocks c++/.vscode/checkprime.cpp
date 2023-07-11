#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "not a prime number" << endl;
    }
    int i = 2;
    while (i < n )
    {
        if (n % i == 0)
        {
            cout << "its not a prime number" << endl;
            break;
        }

               i = i + 1;
    }
    if(i==n){
        cout<<"prime number";
    }
    return 0;
}