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
/*
int lcs(string &s1, string &s2, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }

    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (s1[n - 1] == s2[m - 1])
    {
        dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1);
    }

    else
    {
        dp[n][m] = max(lcs(s1, s2, n - 1, m), lcs(s1, s2, n, m - 1));
    }
    return dp[n][m];
}*/
int dp[10][10][10];
int lcs(string &s1,string &s2,string &s3,int n1,int n2,int n3){
    if(n1==0||n2==0||n3==0){
        return 0;
    }
    if(dp[n1][n2][n3]!=-1){
        return dp[n1][n2][n3];
    }
    if(s1[n1-1]==s2[n2-1] &&s2[n2-1]==s3[n3-1]){
        return dp[n1][n2][n3]= 1+lcs(s1,s2,s3,n1-1,n2-1,n3-1);
    }
    else{
        int l=lcs(s1,s2,s3,n1-1,n2,n3);
        int r=lcs(s1,s2,s3,n1,n2-1,n3);
        int m=lcs(s1,s2,s3,n1,n2,n3-1);
        int a1=max(l,r);
        int a2=max(r,m);
        return dp[n1][n2][n3]= max(a1,a2);
    }

}
int main(){
    string s1="GHQWNV";
    string s2="SJNSDGH";
    string s3="CPGMAH";
    memset(dp,-1,sizeof(dp));
    int n1=s1.size();
    int n3=s3.size();
    int n2=s2.size();
    cout<<lcs(s1,s2,s3,n1,n2,n3);
    
}
/*
also try with bottom up approach*/
