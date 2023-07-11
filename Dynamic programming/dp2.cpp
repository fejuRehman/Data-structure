// reach to 1
#include <bits/stdc++.h>
using namespace std;
// simple recursion approach
int rec(int n)
{
    if (n == 1)
        return 0;
    /*int op1=INT_MAX,op2=INT_MAX ,op3=INT_MAX;
    op1=rec(n-1);
    if(n%2==0) op2=rec(n/2);
    if(n%3==0) op3=rec(n/3);
    return min(op1,min(op2,op3))+1;
    */
    // second method
    int ans = rec(n - 1);
    if (n % 2 == 0)
        ans = min(ans, rec(n / 2));
    if (n % 3 == 0)
        ans = min(ans, rec(n / 3));
    return ans + 1;
}
// dp top down approach
int rec_td(int n, vector<int> &dp)
{
    if (dp[n] != -1)
        return dp[n];
    if (n == 1)
        return dp[n] = 0;
    int ans = rec(n - 1);
    if (n % 2 == 0)
        ans = min(ans, rec_td(n / 2, dp));
    if (n % 3 == 0)
        ans = min(ans, rec_td(n / 3, dp));
    return dp[n] = ans + 1;
}
int rec_bu(int n)
{
    vector<int> dp(n + 1);

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1];
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2]);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3]);
        dp[i]++;
    }
    return dp[n];
}
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    cout << rec(n) << endl;
    cout << rec_td(n, dp) << endl;
    cout << rec_bu(n);
    return 0;
}