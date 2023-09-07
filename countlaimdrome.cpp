#include <iostream>
#include <cmath>
#include <stack>
#include <string>
#include <stdlib.h>
#include <unordered_set>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii vector<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    string s = "aab";
    int n = 3;
    vvi dp(n + 1, vi(n + 1, 0));

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if (i > j)
            {
                dp[i][j] = 0;
            }
            if (i == j)
            {
                dp[i][j] = 1;
            }
            if (s[i] == s[j])
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + 1;
            }
            else
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
            }
        }
    }
    cout << dp[0][n -1];
}