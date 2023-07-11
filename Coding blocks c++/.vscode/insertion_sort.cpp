# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[]={3,2,-5,7,1,0,-9};
int m=sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<m;i++){ //1 se isliye shuru kya kiuki 1 element hoga to already shorted hoga
    for(int j=i;j>0;j--){ //yha pr ham picchle element ko comapre
                          //kr rhe h agr bda hua to replace kr denge
        if(arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
        }else{
            break;
        }
    }
}for(int i=0;i<m;i++){
    cout<<arr[i]<<" ";
}
return 0;
}