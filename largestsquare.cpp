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
int dp[10][10];
vvi a= {{1, 1}, 
                {1, 1}};
int maxmatrix(vvi &a, int n, int m){
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int result=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1][j-1]==1){
                dp[i][j]=1+max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
            result=max(result,dp[i][j]);
        }
    }
    return result;


    
}

int n;
int m;
int main(){
    rep(i,0,10){
        rep(j,0,10){
            dp[i][j]=0;
        }
    }
    cout<<maxmatrix(a,n,m);
}
