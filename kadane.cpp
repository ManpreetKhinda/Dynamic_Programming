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
    int a[8]={-5,-1,5,-3,-1,2,3,-6};
    int c=0;
    int m=0;
    for(int i=0;i<8;i++){
        c+=a[i];
        if(c<=0){
            c=0;
        }
        m=max(m,c);
        

    }
    cout<<m<<endl;
}