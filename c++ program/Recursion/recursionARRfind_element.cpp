//CHECK WHETHER THE ELEMENT IS PRESENT OR NOT   
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool find_element2(int arr[],int size,int x);
bool find_element3(int arr[],int size,int m,int count);
bool find_element(int arr[], int size, int n)
{
    if ( size<= 0)
    {
        return false;
    }
    if (arr[size - 1] == n)
    {
        return true;

    }

    bool smalloutput = find_element(arr, size - 1, n);
    return smalloutput;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
     cout << find_element(arr, 5, 9)<<endl;
    cout << find_element2(arr, 5, 5)<<endl;
    cout << find_element3(arr, 5, 8,0)<<endl;
    
    return 0;
}
bool find_element2(int arr[],int size,int x){
    if(size==0){
        return false;
    }if(arr[0]==x){
        return true;
    }int smalloutput2=find_element2(arr+1,size-1,x);
    return smalloutput2;

}bool find_element3(int arr[],int size,int m,int count){
    if(size==count){
        return false;
    }
    if(arr[count]==m){
    return true;
    } 
    return find_element3(arr,size,m,count+1);
}