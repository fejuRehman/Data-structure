//selection sort
# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[5]={2,3,-1,4,-5};
for(int i=0;i<5-1;i++){
    int min=i;
    for(int j=i+1;j<=5-1;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }swap(arr[i],arr[min]);//swap ander nhi krna kiuki hame pura
                           //loop traverse krna h wrna baar baar swap hoga
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";

}
return 0;
}