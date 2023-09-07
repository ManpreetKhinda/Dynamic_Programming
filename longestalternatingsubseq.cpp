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
int las(int  arr[], int n){
    int inc=1;
    int dec=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            inc=dec+1;
        }
        else if(arr[i]<arr[i-1]){
        dec=inc+1;
    }
    }
    return max(inc, dec);
    
}

int longestalt(vector<int> &v, int n){
    int las[n][2];
    for(int i=0;i<n;i++){
        las[i][0]=las[i][1]=1;
    }
    int res=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if( v[j]<v[i] && las[i][0]<las[j][i]+1){
                las[i][0]=las[j][i]+1;
            }
            if(v[j]>v[i] && las[i][1]<las[j][0]+1){
                las[i][1]=las[j][0]+1;
            }
        }
        if(res<max(las[i][0],las[i][1])){
            res=max(las[i][0],las[i][1]);
        }
    }
    return res;
}