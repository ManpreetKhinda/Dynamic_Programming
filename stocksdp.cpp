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
#include <utility>
#include <climits>
#define vi vector<int>
#define vvi vector<vi>
#define pii vector<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
using namespace std;
/* max profit only once*/
int maxprofit(vi & a){
    int buy=0, sell=0, maxp=0, p=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<=a[buy] && i!=a.size()-1){
            buy=i;
            sell=i;
        }
        if(a[i]>=a[sell]){
            sell=i;
            p=a[sell]-a[buy];
            maxp=max(maxp,p);
        }
    }
    return maxp;
}
/* with infinte transactions*/
int maxprofit2(vi &a){
    int profit=0;
    for(int i=1;i<a.size();i++){
        if(a[i]>a[i-1])profit+=a[i]-a[i-1];
    }
    return profit;
}
int maxprofit2_1(vi&a){
    int n=a.size();
    vector<vector<int>> dp(n+1,vector<int>(2,0));
    for(int idx=n-1; idx>=0;idx--){
        for(int buy=0;buy<=1;buy++){
            if(buy==1){
                dp[idx][buy]=max(-a[idx]+dp[idx+1][0], 0+dp[idx+1][1]);
            }
            else dp[idx][buy]=max(a[idx]+dp[idx+1][1], 0+dp[idx+1][0]);
        }
    }
    return dp[0][1];
}
/*max of two transaction*/
int maxprofit3(vi&a){
    int n=a.size();
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2,vector<int>(3,0)));
    for(int idx=n-1;idx>=0;idx--){
        for(int buy=0;buy<=1;buy++){
            for(int cap=1;cap<=2;cap++){
                if(buy==1){
                    dp[idx][buy][cap]=max(-a[idx]+dp[idx+1][0][cap],0+dp[idx+1][1][cap]);
                }
                else dp[idx][buy][cap]=max(a[idx]+dp[idx+1][1][cap-1], 0+dp[idx+1][0][cap]);
            }
        }
    }
    return dp[0][1][2];
}
/*at most k transactions*/
int maxprofit4(vi&a, int k){
    int n=a.size();
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2,vector<int>(k+1,0)));
    for(int idx=n-1;idx>=0;idx--){
        for(int buy=0;buy<=1;buy++){
            for(int cap=1;cap<=k;cap++){
                if(buy==1){
                    dp[idx][buy][cap]=max(-a[idx]+dp[idx+1][0][cap],0+dp[idx+1][1][cap]);
                }
                else dp[idx][buy][cap]=max(a[idx]+dp[idx+1][1][cap-1],0+dp[idx+1][0][cap]);
            }
        }
    }
    return dp[0][1][k];
}
/* with cooldown*/
int maxprofit5(vi&a){
    int n=a.size();
    vector<vector<int>> dp(n+2,vector<int>(2,0));
    for(int idx=n-1; idx>=0;idx--){
        for(int buy=0;buy<=1;buy++){
            if(buy==1){
                dp[idx][buy]=max(-a[idx]+dp[idx+1][0], 0+dp[idx+1][1]);
            }
            else dp[idx][buy]=max(a[idx]+dp[idx+2][1],0+dp[idx+1][0]);
        }
    }
    return dp[0][1];
}
/* with transaction fee*/
int maxprofit6(vi&a, int fee){
    int n=a.size();
    vector<vector<int>> dp(n+1,vector<int>(2,0));
    for(int idx=n-1;idx>=0;idx--){
        for(int buy=0;buy<=1;buy++){
            if(buy==1){
                dp[idx][buy]=max(-a[idx]+dp[idx+1][0], 0+dp[idx+1][1]);
            }
            else dp[idx][buy]=max(a[idx]+dp[idx+1][1], 0+dp[idx+1][0]);
        }
    }
    return dp[0][1];
}

