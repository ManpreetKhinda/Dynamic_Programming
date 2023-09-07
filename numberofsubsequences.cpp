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

int main(){
    int n;
    cin>>n;
    // int n=6;
    string s;
    cin>>s;
    // string s="ac?b?c";
    int mod=1e9+7;
    unsigned long long int e=1,a=0,ab=0,abc=0;
    rep(i,0,n){
        if(s[i]=='a'){
            a+=e%mod;
        }
        else if(s[i]=='b'){
            ab+=a%mod;
        }
        else if(s[i]=='c'){
            abc+=ab%mod;
        }
        else if(s[i]='?'){
            abc=(3*abc+ab)%mod;
            ab=(3*ab+a)%mod;
            a=(3*a+e)%mod;
            e=(3*e)%mod;
        }

    }
    cout<<abc%mod<<endl;


}
