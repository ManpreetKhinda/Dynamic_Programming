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


int dp[10];
int main(){
    vi a={};
    int n=a.size();
    rep(i,0,10){
        dp[i]=0;
    }
    dp[0]=a[0];
    dp[1]=a[1]+a[0];
    dp[2]=max({dp[1],a[0]+a[2],a[1]+a[2]});
    rep(i,3,n){
        dp[i]=max({dp[i-1],dp[i-2]+a[i],dp[i-3]+a[i-1]+a[i]});
    }
    cout<<dp[n-1];
}