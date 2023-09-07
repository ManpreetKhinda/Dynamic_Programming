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
/*
dp[i]=max(dp[i],dp[j]+1);*/
int main()
{
    int n = 7;
    vi a = {1,2,3,6,5,6,7,8};
    vi dp(n, 1);
    int ans=0;
    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (abs(a[i] - a[j]) == 1)
            {

                dp[i] = max({dp[i], dp[j] + 1});
            }
            
        }
        ans=max(dp[i],ans);
    }
    cout<<ans;
}
