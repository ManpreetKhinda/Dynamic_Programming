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
int n=3;
vi dp(n+1,0);
int sols(int n){
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    rep(j,2,n+1){
        dp[j]=dp[j-1]+dp[j-2];
    }
    return dp[n];
}

int main(){
    cout<<sols(n);
}