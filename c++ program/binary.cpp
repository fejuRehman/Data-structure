// # include<bits/stdc++.h>
//   using namespace std ;
//  int main(){
// int arr[10]={1,4,6,8,10,16,17,18,91,101};
// int k=94;
// int si=0;
// int lasti=10;
// int mid=(si+lasti)/2;
// while(si<=lasti){
//     if(k==arr[mid]){
//         cout<<mid;
//         break;
//     }
//      else if(k>arr[mid]){
//         si=mid+1;
//     }
//      else if(k<arr[mid]){
//         lasti=mid-1;
//     }
//     mid=(si+lasti)/2;
   
// }
// if(k!=arr[mid]){
//     cout<<-1;
// }
// return 0;
// }
//BINARY SEARCH USING RECURSION
# include<bits/stdc++.h>
  using namespace std ;
 int search_binary(int arr[],int n,int s,int e,int key){
   int mid=(s+e)/2;
    //base case
  if(s>e){
    return -1;
  }
    //recursive case
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        search_binary(arr,n,s,mid-1,key);
    }
    else if(arr[mid]<key){
        search_binary(arr,n,mid+1,e,key);
    }
    //search_binary(arr,n,s,e,key);
 } 
 int main(){
int arr[]={1,2,4,6,7,8,9};
int n=sizeof(arr)/sizeof(int);
int temp=20;
cout<<search_binary(arr,n,0,n-1,temp);
return 0;
}