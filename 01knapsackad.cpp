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
int dp[10][10];
int value(vi &val, vi& wgt, int n, int w){
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(w-wgt[n-1]>=0){
        dp[n][w]=max(value(val,wgt,n-1,w),value(val,wgt,n-1,w-wgt[n-1])+val[n-1]);
    }
    else{
        dp[n][w]=value(val,wgt,n-1,w);
    }
    return dp[n][w];


}
int main(){
    vi val={1,2,3};
    vi wgt={4,5,6};
    rep(i,0,10){
        rep(j,0,10){
            dp[i][j]=-1;
        }
    }
    cout<<value(val,wgt,3,3);

}