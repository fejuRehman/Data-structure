#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int min = INT_MIN;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > min)
        {
            min = m;
        }
        else
        {
            cout << false;
            break;
        }
    }
    return 0;
}