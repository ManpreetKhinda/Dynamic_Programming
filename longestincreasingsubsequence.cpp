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
int dp[10];
int lis(vi &a, int n){
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=1;
    rep(i,0,n){
        if(a[n]>a[i]){
            dp[n]=max(dp[n],1+lis(a,i));
        }
    }
    return dp[n];
}

// int main(){
//     int n=9;
//     rep(i,0,10){
       
//         dp[i]=-1;
//     }
//     vi a={10,22,9,33,21,50,52,60,80};
//     cout<<lis(a,n-1);


// }
// tabulation ; above is memoization
int main(){
    int n=7;
    vi a={1,2,3,4,5,3,2};
    vi dp(n,1);
    int ans=0;
    rep(i,1,n){
        rep(j,0,i){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],1+dp[j]);
            }

        }
        ans=max(ans,dp[i]);
    }
    cout<< ans;


}
