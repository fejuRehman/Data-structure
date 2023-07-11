// maximum circular sub array sum
// isme hmne ye logic lgaya h k sbse pehle puri array ko negative
// kro aur kaden lgakar  maximum sum nikaal lo ye whi sum hoga jo puri array 
/// ko sabse jyada negative bna rha hoga ab ise minus krdo total sum me se 
// aur fir max nikaal do jo answer aaya h kaden se aur return krdo
#include<bits/stdc++.h>
using namespace std ;
int kadens_algo(int* arr,int n){
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        if(curr_sum<0) curr_sum=0;
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
 } 
int kaden_negative(int* arr,int n){
   for(int i=0;i<n;i++){
    arr[i]=-1*arr[i];
   } 
   return kadens_algo(arr,n); 
}
int calc_max_cir_sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int op1=kaden_negative(arr,n);
    int op2=kadens_algo(arr,n);
    if(!op2) return op1;
    return max(op1+sum,op2);
}
int main(){
int arr[]={1,-2,3,4,-1,-2,8};
int n =sizeof(arr)/sizeof(int);
cout<<calc_max_cir_sum(arr,n);
return 0;
}