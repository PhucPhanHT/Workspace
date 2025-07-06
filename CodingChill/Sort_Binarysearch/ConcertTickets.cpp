// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 2e5;

int n,m;
int t[MAXN + 2];
multiset<int> h;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        int x; cin >> x;
        h.insert(x);
    }
    for(int i = 1; i <= m;i++) cin >> t[i];
    for(int i = 1; i <= m;i++){
        auto it = h.upper_bound(t[i]);
 
        if (it == h.begin()) cout << -1 << '\n'; // neu thang dau tien la thang > x thi khong co thang nao <= x ca
        else{
            --it;
            cout << *it << '\n';
            h.erase(it);
        }
    }
    return 0;
};