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
int longest(string&s,int i,int j,int n){
    if(i<0||j>n-1){
        return 0;
    }
    if(i>j){
        return 0;
    }
    if(s[i]==s[j]){
        return 1+longest(s,i+1,j-1,n);
    }
    else{
        return longest(s,i,j-1,n)+longest(s,i+1,j,n)-longest(s,i+1,j-1,n);
    }
}
int main(){
    string s="bdab";
    int n=s.size();
    int i=0;
    int j=n-1;
    cout<<longest(s,i,j,n);
}