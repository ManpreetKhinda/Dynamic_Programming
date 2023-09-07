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
int dp[20][20];


int main(){
    vi a={1,2,3,4};
    int n=a.size();
    int k=10;
    rep(i,0,20){
        rep(j,0,20){
            dp[i][j]=0;
        }
    }
    rep(i,1,k+1){
        rep(j,1,n+1){
            dp[i][j]=dp[i][j-1];
        
        if(a[j-1]<=i){
            dp[i][j]+=dp[i/a[j-1]][j-1]+1;
        }
        }
    }
    cout<< dp[k][n];

    
}