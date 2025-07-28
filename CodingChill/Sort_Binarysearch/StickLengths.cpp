// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n;
int a[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    int mda = (1 + n) / 2;
    long long cost = 0;
    for(int i = 1;i <= n;i++){
        cost += abs(a[i] - a[mda]);
    }
    cout << cost;
    return 0;
};      