// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int xuly(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    int n;
    cin >> n;
    int t = xuly(n);
    if (t % 10 == 9) cout << 1;
    else cout << 0;
    return 0;
};