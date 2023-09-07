#include <iostream>
#include <cmath>
#include <stack>
#include <cstring>
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
    int n = 8;
    int a[8] = {1, 11, 2, 10, 4, 5, 2, 1};
    vi fwd(8,1);
    vi bwd(8,1);
    rep(i, 0, n)
    {
        rep(j, 0, i)
        {
            if (a[i] > a[j])
            {
                fwd[i] = max(fwd[i], 1 + fwd[j]);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] > a[j])
            {
                bwd[i] = max(bwd[i], 1 + bwd[j]);
            }
        }
    }

    int ans = 0;
    rep(i, 0, n)
    {
        ans = max(ans, fwd[i] + bwd[i] - 1);
    }
    cout<< ans;
}