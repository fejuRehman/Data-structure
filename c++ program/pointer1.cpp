#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << &(arr[i]) << " "; // address of array using array
    }
        cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr + i << " "; // address of array using pointer
    }
    return 0;
}