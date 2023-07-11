// array me call by reference pass hota h
#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i]++ << " ";
  }
  cout << endl;
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  print(arr, 5);               // isme array ki value print hoti jaayegi aur saath me updationn hoti jaayegi
  print(arr, 5);              // updation ki vajah se iski value ek aage bdh gyi gyi h
  return 0;
}