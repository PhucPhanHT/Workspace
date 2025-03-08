// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 9;
    float a[n + 1];
    float sum = 0;
    for(int i = 1; i <= 9;i++){
        cin >> a[i];
    }
    for(int i = 1; i <= 9;i++){
        sum += a[i];
    }
    sum = 1.0 * sum / 9;
    cout << sum << '\n';
    return 0;
};