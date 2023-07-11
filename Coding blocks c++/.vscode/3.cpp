
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < a; j++)
    {
        int count=1;
        for (int k = j+1; k < a; k++)
        {
            if (arr[k]==arr[j])
            {
                count++;
            }
            
        }
        cout<<endl<<endl;
        if(count>(a/2)){
            cout<<arr[j]<<endl;
            break;
        }
        return 0;}
}