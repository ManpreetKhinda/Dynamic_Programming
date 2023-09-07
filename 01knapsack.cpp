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
int knapsack(int v[],int w[],int n, int m){

    if(m<=0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    if(w[n-1]>m){
        dp[n][m]=knapsack(v,w,n-1,m);
    }
    else{
    dp[n][m]=max(knapsack(v,w,n-1,m),knapsack(v,w,n-1,m-w[n-1])+v[n-1]);}
    return dp[n][m];

    

    
}
int main(){
    int n=3;
    int v[3]={60,100,150};
    int w[3]={15,30,45};
    rep(i,0,10){
        rep(j,0,10){
            dp[i][j]=-1;
        }
    }
    int m=50;
    cout<<knapsack(v,w,n,50);
}