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

int main()
{
    string s = "axxzxy";
    int n = s.size();
    int dp[n + 1][n + 1];
    rep(i, 0, n + 1)
    {
        rep(j, 0, n + 1)
        {
            dp[i][j] = 0;
        }
    }
    rep(i, 1, n + 1)
    {
        rep(j, 1, n + 1)
        {
            if (i != j && s[i - 1] == s[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n][n];
}