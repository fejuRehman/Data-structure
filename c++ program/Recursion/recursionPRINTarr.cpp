// PRINT ALL INDEXES OF A NUMBER PRESENT IN AN ARRAY
#include <bits/stdc++.h>
using namespace std;
int recursive_answer(int input[], int size, int x, int output[])
{
  if (size == 0)
  {
    return 0;
  }
  int smallanswer = recursive_answer(input, size - 1, x, output);
  if (input[size - 1] == x)
  {
    output[smallanswer++] = size - 1;
  }
  return smallanswer;
}

int print_index1(int input[], int n, int x)
{
  int output[n];
  int size = recursive_answer(input, n, x, output);
  for (int i = 0; i < size; i++)
  {
    cout << output[i] << " ";
  }
}
// second methods and latest method and easy method by me
void print_index(int arr[],int n,int k){
	int static sum=0;
	if(n==0){
		return;
	}
	if(arr[0]==k){
		cout<<sum<<" ";
	} sum=sum+1;
	 print_index(arr+1,n-1,k);
}
int main()
{
  int arr[5] = {1, 2, 4, 2, 4};
  print_index(arr, 5, 4);

  return 0;
}