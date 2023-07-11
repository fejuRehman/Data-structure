//PRINT THE SUM OF ARRAY 
#include <iostream>
using namespace std;
int arrsum1(int arr[], int size)
{
    int static sum = 0;
    if (size <= 0)
    {
        return 0;
    }
    sum = sum + arr[size - 1];
    arrsum1(arr, size - 1);
    return sum;
}
int arrsum2(int arr[],int size,int count){
    int static sum=0;
    if(size==count){
        return 0;
    }
   sum+=arr[count];
arrsum2(arr,size,count+1);
return  sum;
}
int arrsum3(int arr[],int size){
   // int static sum=0;
 if(size==0){
    return 0;
 }
 //sum=sum+arr[0];
  return arr[0]+ arrsum3(arr+1,size-1);
 
}
int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    cout << arrsum1(arr, 4)<<endl;
    cout << arrsum2(arr, 4,0)<<endl;
    cout << arrsum3(arr, 5)<<endl;

    return 0;
}


