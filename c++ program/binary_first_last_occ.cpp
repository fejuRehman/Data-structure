#include <bits/stdc++.h>
using namespace std;
int firstO(int arr[],int size,int key){
int start=0;
int end=7;
int mid=(start+end)/2;
int temp;
while(start<=end){
    if(arr[mid]==key){
        temp=mid;
        end=mid-1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    mid=(start+end)/2;
}
return temp;
}
int lastO(int arr[],int size,int key){
int start=0;
int end=7;
int mid=(start+end)/2;
int temp;
while(start<=end){
    if(arr[mid]==key){
        temp=mid;
        start=mid+1;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    mid=(start+end)/2;
}
return temp;
}
int main()
{
    int arr[8] = {1, 2, 2, 3, 3, 3, 4, 5};
      cout<<firstO(arr,8,3);
      cout<<endl;
      cout<<lastO(arr,8,3);
    return 0;
}