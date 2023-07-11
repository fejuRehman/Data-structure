#include <bits/stdc++.h>
using namespace std;
void merge_2_sorted(int arr1[], int s, int e)
{
  int mid = (s + e) / 2;
  int i = s, j = mid + 1, k = s;
  int arr2[100];
  while (i <= mid and j <= e)
  {
    if (arr1[i] < arr1[j])
    {
      arr2[k++] = arr1[i++];
    }
    else
    {
      arr2[k++] = arr1[j++];
    }
  }
  while (i <= mid)
  {
    arr2[k++] = arr1[i++];
  }
  while (j <= e)
  {
    arr2[k++] = arr1[j++];
  }
  for (int i = s; i <= e; i++)
  {
    arr1[i] = arr2[i];
  }
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void merge_sort(int arr[], int s, int e)
{
  if (s == e)
    return;
  int mid = s + (e - s) / 2;
  merge_sort(arr, s, mid);
  merge_sort(arr, mid + 1, e);
  merge_2_sorted(arr, s, e);
}
int main()
{
  int arr[100] = {7, 3, 8, 5, 1, 2};
  merge_sort(arr, 0, 5);
  print(arr, 6);
  return 0;
}
// #include<iostream>
// using namespace std;
// void merge_2_sorted_arr(int a1[], int s, int e){
// 	int a3[1000000];
// 	int m = s + (e-s)/2;
// 	int i = s, j = m+1, k = s;
// 	while(i <= m and j <= e){
// 		if(a1[i] < a1[j]){
// 			a3[k++] = a1[i++];
// 		}else{
// 			a3[k++] = a1[j++];
// 		}
// 	}
// 	while(i <= m) a3[k++] = a1[i++];
// 	while(j <= e) a3[k++] = a1[j++];
// 	for(int i = s; i <= e; i++){
// 		a1[i] = a3[i];
// 	}
// }
// void merge_sort(int arr[], int s, int e){
// 	// base case
// 	if(s==e) return;
// 	// recursive case
// 	// DIVIDE
// 	int m = s + (e-s)/2;
// 	// SORT
// 	merge_sort(arr, s, m);
// 	merge_sort(arr, m+1, e);
// 	// MERGE
// 	merge_2_sorted_arr(arr, s, e);
// }
// void print(int arr[], int n){
// 	for(int i = 0; i < n; i++){
// 		cout<<arr[i]<< " ";
// 	}cout<<endl;
// }
// int main(){
// 	int arr[] = {5, 4, 3, 2, 1};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	print(arr, n);
// 	merge_sort(arr, 0, n-1);
// 	print(arr, n);
// 	return 0;
// }