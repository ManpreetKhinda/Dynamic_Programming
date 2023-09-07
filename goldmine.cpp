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
int goldcollection(vvi &mat, int x, int y, int n, int m, vvi &dp)
{
    if (x < 0 || x == n || y == m)
    {
        return 0;
    }
    if (dp[x][y] != -1)
    {
        return dp[x][y];
    }
    int urd = goldcollection(mat, x - 1, y + 1, n, m, dp);
    int lld = goldcollection(mat, x + 1, y + 1, n, m, dp);
    int left = goldcollection(mat, x, y + 1, n, m, dp);
    return dp[x][y] = mat[x][y] + max({urd, lld, left});
}
int maxcollection(vvi &mat, int n, int m)
{
    int maxgold = 0;
    vvi dp(n, vi(m, -1));
    rep(i, 0, n)
    {
        int curr = goldcollection(mat, i, 0, n, m, dp);
        maxgold = max(maxgold, curr);
    }
    return maxgold;
}
int main()
{
    vvi mat{{1, 3, 1, 5},
            {2, 2, 4, 1},
            {5, 0, 2, 3},
            {0, 6, 1, 2}};
    int n = 4, m = 4;
    cout << maxcollection(mat, n, m);
}