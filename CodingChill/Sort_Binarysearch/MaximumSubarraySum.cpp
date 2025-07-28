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
long long a[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<= n;i++) cin >> a[i];
    long long ans = -1e9,sum = -1e9;
    for(int i = 1; i <= n;i++){
        sum = max((sum + a[i]),a[i]);
        ans = max(sum,ans);
    }
    cout << ans;
    return 0;
};