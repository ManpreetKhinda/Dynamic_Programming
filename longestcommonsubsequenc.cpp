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
// int dp[15][15];
// int lcs(string &s1, string &s2, int n, int m)
// {
//     if (n == 0 || m == 0)
//     {
//         return 0;
//     }

//     if (dp[n][m] != -1)
//     {
//         return dp[n][m];
//     }

//     if (s1[n - 1] == s2[m - 1])
//     {
//         dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1);
//     }

//     else
//     {
//         dp[n][m] = (lcs(s1, s2, n - 1, m)+lcs(s1, s2, n, m - 1));
//     }
//     return dp[n][m];
// }

// int main(){
//     string s1="RISHABH";
//     string s2="SHUBHI";
//     int n=s1.size();
//     int m=s2.size();
//     cout<<lcs(s1,s2,n,m);
//     rep(i,0,10){
//         rep(j,0,10){
//             dp[i][j]=-1;
//         }
//     }
//     cout<<lcs(s1,s2,n,m);

// }
int main()
{
    string s1 = "abca";
    string s2 = "acba";
    int n = s1.size();
    int m = s2.size();
    vvi dp1(n+1,vi(m+1,-1));
    rep(i,0,n+1){
        rep(j,0,m+1){
            if(i==0||j==0){
                dp1[i][j]=0;
                continue;
            }
            if(s1[i-1]==s2[j-1]){
                dp1[i][j]=1+dp1[i-1][j-1];
            }
            
            else{
                dp1[i][j]=max(dp1[i-1][j], dp1[i][j-1]);

            }
        }
    }
    rep(i,0,n+1){
        rep(j,0,n+1){
            cout<<dp1[i][j]<<" ";
        }
        cout<<endl;
    }}