// dutch flag algorithm
// used for sorting array having only 0,1,2 value 
#include<bits/stdc++.h>
using namespace std ;
void dutch_algo(int arr[],int n){
    int l=0;    // l stand for low
    int m=0;    // m stands for mid
    int h=n-1;  // h stands for high
      while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else if(arr[m]==1) m++;
        
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

}
int main(){
int arr[]={1,0,2,2,1,1,0,0};
int n=sizeof(arr)/sizeof(int);
dutch_algo(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}