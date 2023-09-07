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
    
    vi a = {1,3,5,8,9,2,6,7,6,8,9};
    int n=a.size();
    int dp[20];
    rep(i,0,20){
        dp[i]=0;
    }
    dp[0]=1;

    rep(i, 1, n)
    {
        rep(j, 0, i)
        {
            if (a[j] >= i - j && dp[j]!=0)
            {
                if(dp[i]==0){
                    dp[i]=dp[j]+1;
                }
                else{
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
    }
    cout << dp[n - 1];
}
//