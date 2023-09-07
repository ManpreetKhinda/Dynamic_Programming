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
bool dp[100];

int main(){
    vi nums={3,2,1,0,4};
    int n=nums.size();
    rep(i,0,n+1){
        dp[i]=false;
    }
    dp[0]=true;
    // rep(i,1,n){
    //     rep(j,0,i){
    //         if(nums[j]>=i-j && dp[j]){
    //             dp[i]=true;
    //         }
    //     }
    // }
    for(int j=0;j<n;j++){
        if(j+arr[j]>=n-1){
            return true;
        }
        for(int i=arr[j];i>=0;i--){
            dp[j+i]=true;
        }
    }
    cout<<dp[n-1];
}