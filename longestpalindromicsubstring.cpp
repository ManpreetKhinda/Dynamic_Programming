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
/*using recursion*/
int lps(string str,int i,int j, int count){
    if(i>j){
        return count;
    }
    if(i==j){
        return (count+1);
    }
    if(str[i]==str[j]){
        count=lps(str,i+1,j-1,count+2);
        return max({count,lps(str,i+1,j,0),lps(str,i,j-1,0)});
    }
    return max(lps(str,i+1,j,0),lps(str,i,j-1,0));
}
string longestPalindrome(string &s){
        // code here
        // reverse(s.begin(),s.end());
        
        int n=s.length();
        bool dp[n][n];
        memset(dp,0,sizeof dp);
        int maxl=1;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        int start=0;
        int end=0;
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                if(maxl<2){
                    start=i;
                    end=i+1;
                    maxl=2;
                }
                
            }
        }
        for(int k=3;k<n+1;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(dp[i+1][j-1] && s[i]==s[j]){
                    dp[i][j]=true;
                    if(k>max(2,maxl)){
                        start=i;
                        end=j;
                        maxl=max(maxl,k);
                    }
                    else{
                        
                    }
                }
            }
        }
        if(maxl==1){
            return s.substr(0,1);
        }
        return s.substr(start,maxl);
    }
int main(){
    string s="badd";
    cout<<longstr(s);
}