#include <iostream>
using namespace std;
void inversearr(int arr[], int s,int e)
{ 
  if(s>=e){
	return;
  }
  swap(arr[s],arr[e]);
  
  inversearr(arr,s+1,e-1);
	
}
int main()
{
	int n;
	cin >> n;
	//cout << endl;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//cout << endl;
	inversearr(arr, 0,n-1);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}