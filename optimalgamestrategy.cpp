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
int a[4]={1,2,3,4};

int solve(int i, int j){
    if(i==j){
        return a[j];
    }
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int l=a[i]+min(solve(i+2,j),solve(i+1,j-1));
    int r=a[j]+min(solve(i,j-2),solve(i+1,j-1));
    return dp[i][j]= max(l,r);
}
int main(){
    int n=4;
    rep(i,0,10){
        rep(j,0,10){
            dp[i][j]=-1;
        }
    }
    cout<<solve(0,n-1);
}