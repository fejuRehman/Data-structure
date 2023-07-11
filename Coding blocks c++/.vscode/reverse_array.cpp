// print the array in reverse order
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter the size of an array" << endl;
    int size;
    cin >> size;
    int arr[size];
    // here i am taking input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } // this loop is for output
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}