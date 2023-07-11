#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int k = 0;
    while (n > 0)
    {
        cin >> n;
        arr[k] = n;
        k++;
    }
    for (int i = 0; i < k - 1; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}