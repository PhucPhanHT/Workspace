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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1;i < n;i++){
            int b = i;
            int a = n - i;
            if (a < n) ++cnt;
        }
        cout << cnt << '\n';
    }
    return 0;
};