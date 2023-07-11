# include<bits/stdc++.h>
  using namespace std ;
 int main(){
    //1st method not a good method
int arr[]={2,2,3,3,4,4,7};
int n=sizeof(arr)/sizeof(int);
// int count=0;
// for(int i=0;i<n;i++){
//     if(arr[i]==arr[i+1]){
//         count=0;
//     }
//     else{
//         count++;
//     }
//     if(arr[0]!=arr[1]){
//         cout<<arr[0];
//         break;
//     }
//     if(arr[n-2]!=arr[n-1]){
//         cout<<arr[n-1];
//         break;
//     }
//     if(count==2){
//         cout<<arr[i];
//         break;
//     }
// }
//SECOND METHOD OPTIMIZE METHOD
int ans=0;
for(int i=0;i<n;i++){
    ans=ans^arr[i];   //A XOR B=0 AND  0 XOR A=A
}                     
cout<<ans;
return 0;
}