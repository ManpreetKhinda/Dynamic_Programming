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
int dp[10][10];
int solve(int n, int x, int y, int z, vector<int> &dp){
        if(n == 0) return 0;
        if(n < 0) return -1;
        
        if(dp[n]) return dp[n];
        
        int ans1 = solve(n-x, x, y, z, dp);
        int ans2 = solve(n-y, x, y, z, dp);
        int ans3 = solve(n-z, x, y, z, dp);
        dp[n] = 1 + max(max(ans1, ans2), ans3);
        return dp[n] = (dp[n] == 0)? -1: dp[n];
    }
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>dp(n+1, 0);
        int ans = solve(n, x, y, z, dp);
        return ans == -1? 0: ans;
    }
int main(){
    vi a={5,3,2};
    int n=5;
    int x=a.size();
    rep(i,0,10){
        rep(j,0,10){
            dp[i][j]=-1;
        }
    }
    cout<<maxcut(a,n,x);
}