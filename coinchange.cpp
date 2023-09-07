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
#define N 1000
int dp[N][N];
int numways(vector<int> &coins, int n, int v)
{
    if (v == 0)
    {
        return 1;
    }
    if (v < 0)
    {
        return 0;
    }
    if (n <= 0)
    {
        return 0;
    }
    if (dp[n][v] != -1)
    {
        return dp[n][v];
    }
    dp[n][v] = numways(coins, n, v - coins[n - 1]) + numways(coins, n - 1, v);
    return dp[n][v];
}
int main()
{
    int v = 4;
    int n = 3;
    vector<int> coins = {1,2,3};
    vector<int> t(v + 1, 0);
    t[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = coins[i]; j <= v; ++j)
        {
            t[j] += t[j - coins[i]];
        }
    }
    cout << t[v];
}
