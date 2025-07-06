// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define pii pair<int,int>

const int MAXN = 2e5;

int n;
vector<pii> a;

bool cmp(pii X,pii Y){
    return X.second < Y.second;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end(),cmp);
    int cnt = 0,end_time = 0;
    for(auto [x,y] : a){
        if (x >= end_time){
            ++cnt;
            end_time = y;
        }
    }
    cout << cnt;
    return 0;
};