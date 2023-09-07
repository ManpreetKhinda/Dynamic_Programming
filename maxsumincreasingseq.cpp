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
    vi a = {20,8,27,37,9,12,46};
    int n = a.size();
    int dp[n];
    dp[0]=a[0];
    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (a[i] > a[j])
            {
                dp[i] +=a[j];
            }
            
        }
    }
    cout << dp[n - 1];
}