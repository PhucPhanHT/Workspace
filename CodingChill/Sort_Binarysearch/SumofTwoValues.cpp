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
int a[MAXN + 2];
map<int,int> dd;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n;i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n;i++){
        if (dd[x - a[i]]){
            cout << dd[x - a[i]] << " " << i;
            return 0;
        }
        if (dd[a[i]] == 0) dd[a[i]] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
};