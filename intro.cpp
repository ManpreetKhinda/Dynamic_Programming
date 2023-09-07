/* properties of dp
optimal substructure overlappping subproblem
memoization a loop up table is maintained and checked
 before computation of any state.recursion is involved
tabulation solution is built from base it is an iterative process.

types of problem
minimization and maximization
find the number of ways
whereever we can form recurrence relation or given in question
can be solved using dp

*/

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

#define N 10000
int dp[N];

// int fib(int n){

//     if(n==0||n==1){
//         return 0;

//     }
//     if(n==2){
//         return 1;
//     }

//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     dp[n]= fib(n-1)+fib(n-2);
//     return dp[n];

// }
// int main(){
//     int n=10;
//     for(int i=0;i<N;i++){
//         dp[i]= -1;
//     }

//     cout<<fib(n);
//     return 0;
// }
// minimum squares needed to form n;
int minsquare(int n)
{
    if (n == 0 || n == 1 || n == 2 || n == 3)
    {
        return n;
    }
    if (dp[n] != INT_MAX)
    {
        return dp[n];
    }
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + minsquare(n - i * i));
    }
    return dp[n];
}
int main()
{
    int n = 10;
    for(int i=0;i<N;i++){
        dp[i]=INT_MAX;
    }
    cout << minsquare(n);
}