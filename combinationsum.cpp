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
vi nums = {1, 2, 3};
int t = 4;


int nways(vi &nums, int n, int t)
{
    vector<unsigned long long int> dp(t+1,0);
    dp[0]=1;
    for(int i=1;i<=t;i++){
        for(int j=0;j<nums.size();j++){
            if(i-nums[j]>=0){
                dp[i]=dp[i]+dp[i-nums[j]];
            }
        }
    }
    return dp[t];
}
int main()
{
    
    cout << nways(nums, n, t);
}