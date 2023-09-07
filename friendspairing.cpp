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

int main(){
    int n=6569;
    vi dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    rep(i,2,n+1){
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    }
    cout<<dp[n];
}