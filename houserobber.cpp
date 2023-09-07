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
vi nums = {2,7,9,3,8,8};
int n = nums.size();
int dp[10];
int main()
{
    rep(i, 0, 10)
    {
        dp[i] = 0;
    }
    dp[0] = nums[0];
    dp[1] = nums[1];
    rep(i, 2, n)
    {
        dp[i] = max(dp[i], nums[i] + dp[i-2]);
    }
    sort(dp, dp + 10);
    cout << dp[9];
}