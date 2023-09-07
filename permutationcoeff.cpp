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
int n = 6;
int k = 2;
int dp[10][10];
int pck(int n, int k)
{
    rep(i, 0, n + 1)
    {
        rep(j, 0, min(i, k) + 1)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + j * dp[i - 1][j - 1];
            }
            dp[i][j + 1] = 0;
        }
    }
    return dp[n][k];
}
int main()
{
    cout << pck(n, k);
}