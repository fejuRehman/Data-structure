//PRINT THE ARRAY OF INDEX
# include<iostream>
  using namespace std ;
 int index_number(int arr[],int size,int x,int count=0){
    if(size==count){
        return -1;
    }
    if(arr[count]==x){
        return count;
    }
    return index_number(arr,size,x,count+1);

 }
 int main(){
    int arr[5]={1,2,3,4,5};
cout<<index_number(arr,5,5);
return 0;
}