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
int dp[100][100];
string s1="abc";
string s2="abc";

int lcs(string &s1,string &s2,int n,int m){
    if(n==0||m==0){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(s1[n-1]==s2[m-1]){
        dp[n][m]=1+lcs(s1,s2,n-1,m-1);
    }
    else{
        dp[n][m]=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
    }
    return dp[n][m];
}
int main(){
    rep(i,0,100){
        rep(j,0,100){
            dp[i][j]=-1;
        }
    }
    int n=s1.size();
    int m=s2.size();
    cout<<lcs(s1,s2,n,m);


}