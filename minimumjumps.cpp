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
int minJumps(int arr[], int n){
        // Your code here
        if(n<=1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int maxreach=arr[0];
        int steps=arr[0];
        int jumps=1;
        for(int i=1;i<n;i++){
            if(i==n-1)return jumps;
            maxreach=max(maxreach,i+arr[i]);
            steps--;
            if(steps==0){
                jumps++;
                if(i>=maxreach) return -1;
                steps=maxreach-i;
            }
        }
        return -1;
    }
int minjumps(int a[],int n){
    if(a[0]==0){
        return -1;
    }
    if(n<=1){
        return 0;
    }
    int curr=0, farthest=0, jumps=0;
    for(int i=0;i<n-1;i++){
        farthest=max(farthest,i+a[i]);
        if(i==curr){
            jumps++;
            curr=farthest;
        }
    }
    if(curr<n-1){
        return -1;
    }
    return jumps;

}
int main(){
    int n=11;
    int a[11]={1,3,5,8,9,2,6,7,6,8,9};
    cout<<minjumps(a,11);

}