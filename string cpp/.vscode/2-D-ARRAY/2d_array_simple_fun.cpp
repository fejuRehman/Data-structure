#include <bits/stdc++.h>
using namespace std;
bool find_element(int arr[][4], int search, int i, int j)
{
    for (int col = 0; col < j; col++)
    {
        for (int row = 0; row < i; row++)
        {
            if (arr[row][col] == search)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    // taking the input in 2-d array->row wise
    //  int arr[3][4];
    //  for(int row=0;row<3;row++){
    //      for(int col=0;col<4;col++){
    //          cin>>arr[row][col];
    //      }
    //  }
    // taking the input in 2-d array->col wise
    int arr[3][4];
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }
    // printing the element of array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int search;
    cout << "enter the element you want to search" << endl;
    cin >> search;
  
    if (find_element(arr, search, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
        cout << "key not found" << endl;
    return 0;
}