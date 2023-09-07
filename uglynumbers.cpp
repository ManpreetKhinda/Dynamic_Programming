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
int main(){
    int n=10;
    int c2=0;
    int c3=0;
    int c5=0;
    vi dp(n+1);
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=min({2*dp[c2],3*dp[c3],5*dp[c5]});
        if(2*dp[c2]==dp[i]){
            c2++;
        }
        if(3*dp[c3]==dp[i]){
            c3++;
        }
        if(5*dp[c5]==dp[i]){
            c5++;
        }
    }
    cout<<dp[n-1];
}
