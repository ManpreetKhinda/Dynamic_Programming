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
int removals(vector<int>& arr, int k){
        //Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int l=0;int r=0; int maxlen=INT_MIN;
        while(r<n){
            if(arr[r]-arr[l]<=k){
                maxlen=max(maxlen,r-l+1);
                r++;
                
                
            }
            else{
                l++;
            }
        }
        return n-maxlen;
}

int main(){
    int arr[]={1,3,4,9,10,11,12,17,20};
    
}
