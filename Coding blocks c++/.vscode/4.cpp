# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[5]={-2,-1,0,5,6};
for(int i=0;i<5;i++){
    arr[i]=arr[i]*arr[i];
    cout<<arr[i]<<endl;
}
for(int i=0;i<5;i++){
    for(int j=0;j<5-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}
return 0;
}