//spiral print using vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int sr = 0;
    int sc = 0;
    int er = v.size() - 1;
    // cout<<er;
    int ec = v[0].size() - 1;
    // cout<<ec;
    while(sr<=er and sc<=ec){
    for (int i = sc; i <= ec; i++)
    {
        cout << v[sr][i] << " ";
    }
    sr++;
    for (int i = sr; i <= er; i++)
    {
        cout << v[i][ec] << " ";
    }
    ec--;
    for (int i = ec; i >= sc; i--)
    {
        cout << v[er][i] << " ";
    }
    er--;
    for (int i = er; i >= sr; i--)
    {
        cout << v[i][sc] << " ";
    }
    sc++;
    }
    return 0;
}