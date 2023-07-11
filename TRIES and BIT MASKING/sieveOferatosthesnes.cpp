// print all prime number upto n
#include <bits/stdc++.h>
using namespace std;
void print_all_prime(int n)
{
    bool *arr = new bool[n + 1];
    arr[0] = false;
    arr[1] = false;
    arr[2] = true;
    for (int i = 3; i <= n; i++)
    {
        if (i % 2!=0)
            arr[i] = true;
        else
            arr[i] = false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (arr[i])
        {
            for (int mul = i * i; mul <= n; mul += 2 * i)
            {
                arr[mul] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i])
            cout << i << " ";
    }
}
int main()
{
    int n=100;
    
    print_all_prime(n);
    return 0;
}