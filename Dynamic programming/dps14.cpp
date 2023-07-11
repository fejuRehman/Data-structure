/// buy and sell stock

#include<bits/stdc++.h>
using namespace std ;

int max_profit(int* arr,int n){
    int maxProfit=0;
    int mini=arr[0];
    for(int i=1;i<n;i++){
        int profit=arr[i]-mini;
        maxProfit=max(maxProfit,profit);
        mini=min(mini,arr[i]);
    }
    return maxProfit;
}

int main(){
int arr[]={1,4,9,2,3,7};
int n=sizeof(arr)/sizeof(int);
cout<<max_profit(arr,n);
return 0;
}