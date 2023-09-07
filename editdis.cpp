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
int diff(string &s1, string &s2, int n, int m,vector<vector<int>>&dp){
    if(n==0 ||m==0){
        return 0;
    }
    if(n==0){
        return m;
    }
    if(m==0){
        return n;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(s1[n-1]==s2[m-1]){
        return dp[n][m]=diff(s1,s2,n-1,m-1,dp);
    }
    return dp[n][m]=1+min({diff(s1,s2,n-1,m-1,dp),diff(s1,s2,n,m-1,dp),diff(s1,s2,n-1,m,dp)});

}

int main()
{
    string s1 = "amakn";
    string s2 = "preetman";
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    // cout<<max(3,3)-diff(s1,s2,3,3);
    cout << diff(s1, s2, 5, 8,dp);
}
