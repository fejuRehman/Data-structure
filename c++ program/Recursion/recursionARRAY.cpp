//CHECK WHETHER THE ARRAY IS SORTED OR NOT USING BOOLEAN
#include <iostream>
using namespace std;
bool is_sorted(int arr[], int size)
{
    if (size == 0 || size == 1)   //THIS IS THE BASE CASE 
    {
        return true;
    }
    if (arr[0] > arr[1])          //HERE WE ARE CHECKING IF THE ZEOTH INDEX IS GREATER
    {                             // THEN FIRST THEN RETURN FALSE
        return false;
    }
    return  is_sorted(arr + 1, size - 1);
    
}
int main()
{
    int arr[5] = {1,2,310,4,5};
      
    cout << is_sorted(arr, 5);
    return 0;
}