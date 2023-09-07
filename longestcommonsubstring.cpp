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

int longestsubstr(string &s1, string &s2, int m,int n){
    int LCS[m+1][n+1];
    int result=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 ||j==0){
                LCS[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                LCS[i][j]=LCS[i-1][j-1]+1;
                result=max(result,LCS[i][j]);
            }
            else{
                LCS[i][j]=0;
            }
            
        }
    }
    return result;
}
int LCSubstr(string &s1, string &s2, int m,int n){
    int dp[2][n+1];
    int res=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i%2][j]=dp[(i-1)%2][j-1]+1;
                if(dp[i%2][j]>res){
                    res=dp[i%2][j];
                }
                else{
                    dp[i%2][j]=0;
                }

            }
        }
    }
    return res;
}