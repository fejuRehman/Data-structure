#include<stdio.h>
int main()
{int arr[5];
for(int i=0;i<5;i++){
    printf("index %d",i);
    scanf("%d\n",&arr[i]);
}
for(int i=0;i<5;i++)
    printf("%d index %d\n",i,arr[i]);
   

    return 0;}

