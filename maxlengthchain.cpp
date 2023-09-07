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

int n=5;
vector<pair<int,int>> a={{5,24},{39,60},{15,28},{27,40},{50,90}};
int len(vector<pair<int,int>> &a, int n){
    rep(i,1,n){
        rep(j,0,i){
            if(a[i].ss>a[j].ff){
                dp[i]=dp[j]+1;
            }
        }
    }
    return dp[n-1];

}   
int main(){
    rep(i,0,10){
        dp[i]=0;
    }
    cout<<len(a,5);


}