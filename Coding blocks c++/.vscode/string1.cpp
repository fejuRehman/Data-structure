#include <bits/stdc++.h>
int cal_length(char str[], int n)
{
    int length;
    for (length = 0; str[length]; length++)
    {if(str[length]=='\t'){
        continue;
    }
    }
    return length;
}
using namespace std;
int main()
{
    char str[50];
    cin.getline(str, 50);
    cout << cal_length(str, 50);
    return 0;
}