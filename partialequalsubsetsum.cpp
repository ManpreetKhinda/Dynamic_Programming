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

int ways(int n, int t, vi&a){
    if(t<0){
        return 0;
    }
    if(t==0){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    if(dp[n][t]!=-1){
        return dp[n][t];
    }
    
    if(t>=a[n-1]){
        dp[n][t]=ways(n-1,t-a[n-1],a)+ways(n-1,t,a);
    }
    else{
        dp[n][t]=ways(n-1,t,a);
    }
    return dp[n][t];

}
int main(){
    vi a={1,5,11,5};
    int t=11;
    int n=a.size();
    int sum=0;
    for(auto i:a){
        sum+=i;
    }
    rep(i,0,20){
        rep(j,0,20){
            dp[i][j]=-1;
        }
    }
    
    if(n%2!=0 ||sum%2!=0)
        cout<<"NO";
    cout<<ways(n,t,a);
    
        
}



