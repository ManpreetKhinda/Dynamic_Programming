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
int dp[100];

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
    

}


int main(){
    int n=4;
    int w=8;
    int wgt[5]={1,3,4,5};
    int val[5]={1,4,5,7};
    rep(i,0,100){
        dp[i]=-1;
    }
    rep(i,0,w+1){
        rep(j,0,n){
            if(i-wgt[j]>=0){
                dp[i]=max(dp[i],val[j]+dp[i-wgt[j]]);
            }
        }
    }
    // cout<<knapsack(val,wgt,n,w);
    cout<<dp[n-1];
}