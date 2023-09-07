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

int countm(string s){
    int maxdif=0;
    int curdif=0;
    int count0=0;
    int count1=0;
    for(char i :s){
        if(i=='0'){
            count0++;
        }
        else{
            count1++;
        }
        curdif=count0-count1;
        maxdif=max(maxdif,curdif);
        if(curdif<0){
            count0=0;
            count1=0;

        }
    }
    return maxdif;
}

int main(){
    string s="11000010001";
    int n=s.size();
    
    cout<<countm(s);
}