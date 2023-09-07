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
int dp[100];
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=n*fact(n-1);
    return dp[n];
}
int main(){
    rep(i,0,100){
        dp[i]=-1;
    }
    int m=3;
    int n=7;
    int a=m+n-2;
    int b=m-1;
    int c=n-1;
    cout<<fact(a)/(fact(b)*fact(c));
}