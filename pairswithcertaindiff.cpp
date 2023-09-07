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

int main(){
    vi a={5,15,10,300};
    sort(a.begin(),a.end());
    int n=a.size();
    int k=12;
    sort(a.begin(),a.end(),greater<int>());
    int step=a[0];
    int sum=0;
    rep(i,1,n){
        if(step-a[i]<k){
            sum+=step+a[i];
            step=a[i+1];
            i++;
        }
        else{
            step=a[i];
            
        }

    }
    cout<<sum;
}