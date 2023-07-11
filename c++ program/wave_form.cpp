#include <iostream>
using namespace std;
int main()
{
	int arr[3][5] = {1, 2, 3, 4, 5,
					 6, 7, 8, 9, 10,
					11, 12, 13, 14, 15};
	int row = 3;
	int col = 5;
	for (int i = 0; i < col; i++)
	{
		if (i % 2)
		{
			for (int j = row - 1; j >= 0; j--)
			{
				cout << arr[j][i]<<" ";
			}
		}
		else
		{
			for (int j = 0; j <row ; j++)
			{
				cout << arr[j][i]<<" ";
			}
		}
	}
	return 0;
}