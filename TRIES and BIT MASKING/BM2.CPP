// unique 2  number in an array
#include<bits/stdc++.h>
using namespace std ;
int un_1(int* arr,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
void un_2(int* arr,int n){
    int ans=un_1(arr,n);
    int filter=1;  // ye pta lgayega wo bit jo decide krega k kaise split krna h array ko do parts me
    while((ans & filter)==0){ 
        filter<<=1;
    }
    int un1=0;
    int un2=0;
    for(int i=0;i<n;i++){
        if((arr[i]& filter)==0){
            un1=un1^arr[i];
        }
        else{
            un2=un2^arr[i];
        }
    }
    cout<<un1<<" "<<un2<<endl;
}
int main(){
int arr[]={2,4,5,6,5,6,2,4,-1,-2};
int n=sizeof(arr)/sizeof(int);
un_2(arr,n);
return 0;
}