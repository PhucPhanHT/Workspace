// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;
int n, a[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1);
    int cnt = 1;
    for(int i = 2; i <= n;i++){
        if (a[i - 1] != a[i]) ++cnt;
    }
    cout << cnt;
    return 0;
};