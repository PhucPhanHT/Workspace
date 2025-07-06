// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n,x;
int p[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n;i++) cin >> p[i];
    sort(p + 1,p + n + 1);
    int cnt = 0, l = 1,r = n;
    while(l <= r){
        if ((p[l] + p[r]) > x){
            --r;
        } 
        else{
            ++l;
            --r;
        }
        ++cnt;
    } 
    cout << cnt;
    return 0;
};