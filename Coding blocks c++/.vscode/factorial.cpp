// #include <bits/stdc++.h>
// using namespace std;
// long long int calculatefac(int n)
// {
//   long long int factorial = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     factorial = factorial * i;
//   }
//   return factorial;
// }
// int main()
// {
//   int fact;
//   cin >> fact;
//   cout << calculatefac(fact);

//   return 0;
// }

// calculation of factorial of large number
#include<bits/stdc++.h>
using namespace std ;
int arr_multiply(int n,int arr[],int arr_size){
int carry=0;
for(int i=0;i<arr_size;i++){
int product=arr[i]*n+carry;
arr[i]=product%10;
carry=product/10;
}
while(carry){
  arr[arr_size]=carry%10;
  carry=carry/10;
  arr_size++;
}
return arr_size;
}
void cal_factorial(int n){
  int arr[1000];
  int arr_size=1;
  arr[0]=1;
  for(int i=2;i<=n;i++){
    arr_size=arr_multiply(i,arr,arr_size);
  }

for(int i=arr_size-1;i>=0;i--){
  cout<<arr[i];
}
}
int main(){
int n;
cin>>n;
cal_factorial(n);
return 0;
}