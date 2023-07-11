// given a string we have to replace the pi
// with 3.14
#include <bits/stdc++.h>
using namespace std;
void replacepi(char str[], int start)
{
//BASE CASE WHEN SIZE OF STRING IS 0 OR 1 THEN RETURN THE SAME STRING
    if (str[start] == '\0' || str[start + 1] == '\0')
    {
        return;
    }
    //CALLING A FUNCTION 
    replacepi(str, start + 1);
    //CHECK THE VALUE AT ZEROTH INDEX AND FIRST INDEX
    //IF ZERO INDEX IS ==P AND FIRST INDEX IS ==1
    //THEN SHIFT THE STRING BY 4 BCZ FOR 3.14 WE NEED 4 SPACE
    if (str[start] == 'p' and str[start + 1] == 'i')
    {
        for (int i = strlen(str); i >= start + 2; i--)
        {
            str[i + 2] = str[i];
        }
        str[start + 0] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}
int main()
{
    char str[] = "hipihepipi";
    replacepi(str, 0);
    cout << str;
    return 0;
}