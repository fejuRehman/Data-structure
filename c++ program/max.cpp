#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int max = -1;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i]){        
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}