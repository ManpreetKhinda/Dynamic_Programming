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
    vi a = {0, 1, 0, 3, 2, 3};
    int n = a.size();
    int dp[100];
    rep(i, 0, n)
    {
        dp[i] = 1;
    }
    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    rep(i, 0, n)
    {
        cout << dp[i];
    }
}