# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr1[5]={1,2,3,3,4};
int arr[3]={1,2,3};
    int j=0;
for(int i=0;i<5;i++){
    for(;j<3;j++){
        if(arr[i]<arr[j]){
            i++;
        }
        if(arr[i]==arr[j]){
            cout<<arr[i]<<" ";
            //arr[j]=INT_MIN;
            j++;
            break;
        }
    }
}
return 0;
}