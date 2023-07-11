// minimum cost
#include <bits/stdc++.h>
using namespace std;
// brute force approach
int min_cost_helper_1(int **arr, int r, int c, int i = 0, int j = 0)
{
    // base case
    if (i == r - 1 and j == c - 1)
        return arr[i][j];
    if (i >= r or j >= c)
        return INT_MAX;
    // recursive case
    int op1 = min_cost_helper_1(arr, r, c, i, j + 1);
    int op2 = min_cost_helper_1(arr, r, c, i + 1, j + 1);
    int op3 = min_cost_helper_1(arr, r, c, i + 1, j);
    int ans = min(op1, min(op2, op3)) + arr[i][j];
    return ans;
}
int min_cost_1(int **arr, int r, int c)
{
    return min_cost_helper_1(arr, r, c, 0, 0);
}
// memoization approach
int min_cost_helper_2(int **arr, int r, int c, int i, int j, vector<vector<int>> &dp)
{
    // base case
    if (i == r - 1 and j == c - 1)
        return arr[i][j];
    if (i >= r or j >= c)
        return INT_MAX;
    // check if answer is already exist
    if (dp[i][j] != -1)
        return dp[i][j];
    // recursive case
    int op1 = min_cost_helper_2(arr, r, c, i, j + 1, dp);
    int op2 = min_cost_helper_2(arr, r, c, i + 1, j + 1, dp);
    int op3 = min_cost_helper_2(arr, r, c, i + 1, j, dp);
    // store data for future use
    int a = min(op1, min(op2, op3)) + arr[i][j];
    dp[i][j] = a;
    return a;
}
int min_cost_2(int **arr, int r, int c)
{
    vector<vector<int>> dp(r, vector<int>(c, -1));
    return min_cost_helper_2(arr, r, c, 0, 0, dp);
}
int min_cost_3(int **arr, int r, int c)
{
    vector<vector<int>> dp(r,vector<int>(c));
    // fill the last cell i.e destination
    dp[r - 1][c - 1] = arr[r - 1][c - 1];
    // last row iterating
    for (int i = c - 2; i >= 0; i--)
    {
        dp[r - 1][i] = dp[r - 1][i + 1] + arr[r - 1][i];
    }
    // last column iterating
    for (int i = r - 2; i >= 0; i--)
    {
        dp[i][c - 1] = dp[i + 1][c - 1] + arr[i][c - 1];
    }
    // diagonal iterate or fill remaining cell
    for (int i = r - 2; i >= 0; i--)
    {
        for (int j = c - 2; j >= 0; j--)
        {
            dp[i][j] = min(dp[i][j + 1], min(dp[i + 1][j], dp[i + 1][j + 1])) + arr[i][j];
        }
    }
    return dp[0][0];
}
int main()
{
    int r, c;
    cin >> r >> c;
    int **arr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<min_cost_1(arr,r,c)<<endl;
    cout<<min_cost_2(arr,r,c)<<endl;
    cout << min_cost_3(arr, r, c) << endl;
    return 0;
}