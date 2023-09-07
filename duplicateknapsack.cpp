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
/*
int knapsack(int val[],int wgt[],int n,int w){
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[w]!=-1){
        return dp[w];
    }
    if(wgt[n-1]>w){
        dp[w]= knapsack(val, wgt,n-1,w);
    }
    else{
        dp[w]= max(knapsack(val, wgt,n-1,w),knapsack(val,wgt,n,w-wgt[n-1])+val[n-1]);
    }
    return dp[w];
    

}*/
int knapsack(vi &val,vi &wt,int n,int w){
    vector<int> dp(1000,-1);
    if(w<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[w]!=-1){
        return dp[w];
    }
    if(w-wt[n-1]<0){
        dp[w] =knapsack(val,wt,n-1,w);
    }
    else{
        dp[w]=max(knapsack(val,wt,n,w-wt[n-1])+val[n-1],knapsack(val,wt,n-1,w));
    }
    return dp[w];
}
int main(){
    int n,w;
    cin>>n>>w;
    vi val,w;
    rep(i,0,n){
        cin
    }
}