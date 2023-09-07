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
int coinchange(vector<int>& coins, int amount){
    vector<int> ncoins(amount,0);
    for(int i=0;i<coins.size();i++){
        for(int j=coins[i];j<=amount;){
            ncoins[coins[i]]++;
            j+=coins[i];

        }

    }
}
int main()
{
    vi coins = {2};
    int v = 3;
    int i = coins.size() - 1;
    int cnt = 0;
    while (v != 0 && i >= 0)
    {

        if (v - coins[i] >= 0)
        {
            v -= coins[i];
            cnt += 1;
        }
        else
        {
            i--;
        }
    }
    if(v>0){cout<<-1;}
    else{cout<<cnt;}
    
}