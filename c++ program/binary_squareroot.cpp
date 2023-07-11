#include <bits/stdc++.h>
using namespace std;
int square_root(int n)
{
    int temp;
    int s = 0;
    int e = n;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            temp = mid;
            s = mid + 1;
        }
        else
            {
                e = mid - 1;
            }
             mid = (s + e) / 2;
    }
    return temp;
}
int main()
{
    int n;
    cin >> n;
    cout << square_root(n);

    return 0;
}