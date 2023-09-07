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
int n=5,m=5,k=1;
vi a={1,2,3,4,5};
vi b={5,3,1,4,2};
int dp[10][10][10];
int solve(int i,int j,int k){
    if(i==n || j==m){
        return 0;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    int c1=0;int c2=0;int c3=0;
    if(a[i]==b[j]){
        c1=1+solve(i+1,j+1,k);
    }
    if(k>0){
        c2=1+solve(i+1,j+1,k-1);
    }
    c3=max(solve(i+1,j,k),solve(i,j+1,k));
    return dp[i][j][k]= max({c1,c2,c3});
}

int main(){
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,0,k);
}