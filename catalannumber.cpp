/*
Cn=2n!/n+1!*n!

Count the number of expressions containing n pairs 
of parentheses that are correctly matched. For n = 3,
possible expressions are ((())), ()(()), ()()(), (())(), (()()).
Count the number of possible Binary Search Trees with n keys (See this)
Count the number of full binary trees (A rooted binary 
tree is full if every vertex has either two children or no children)
with n+1 leaves.
Given a number n, return the number of ways you 
can draw n chords in a circle with 2 x n points such that 
no 2 chords intersect.

C_0=1 \ and \ C_{n+1}=\sum_{i=0}^{n}C_iC_{n-i} \ for \ n\geq 0           */
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
unsigned long long int  catalannum(int n){
    
    unsigned long long int catalandp[n+1];
    catalandp[0]=catalandp[1]=1;
    
    for(int i=2;i<=n;i++){
        catalandp[i]=0;
        for(int j=0;j<=i;j++){
            catalandp[i]=catalandp[j]*catalandp[j-i-1];
        }
    }
    return catalandp[n];
}
int catalanrec(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    rep(i,0,n){
        res+=catalanrec(i)*catalanrec(n-i-1);
    }
    return res;
}
long long int catalandp(int n){
    long long int catalan[n+1];
    catalan[0]=catalan[1]=1;
    for(int i=2;i<=n;i++){
        catalan[i]=0;
        for(int j=0;j<i;j++){
            catalan[i]+=catalan[j]*catalan[i-j-1];
        }
    }
    return catalan[n];

}

/*
unsigned long int catalanDP(unsigned int n)
{
    // Table to store results of subproblems
    unsigned long int catalan[n + 1];
 
    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;
 
    // Fill entries in catalan[] using recursive formula
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
 
    // Return last entry
    return catalan[n];
}*/