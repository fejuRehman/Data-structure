#include <iostream>
using namespace std;
int fabonachi(int m)
{
    if (m <= 1)
    {
        return m;
    }
    // if (m == 1)
    // {
    //     return 1;
    // }
    int smalloutput = fabonachi(m - 1) + fabonachi(m - 2);
   
    return smalloutput;
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        cout<<fabonachi(i)<<" ";
    }
    return 0;
}