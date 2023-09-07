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
int count(int n){
    vi dp(n+1,0);
    dp[0]=1;
    vi score={3,5,10};
    rep(i,0,3){
        for(int j=score[i];j<=n;j++){
            dp[j]+=dp[j-score[i]];
        }
    }
    return dp[n];
}
int main(){
    int n=20;
    cout<<count(n);
}
