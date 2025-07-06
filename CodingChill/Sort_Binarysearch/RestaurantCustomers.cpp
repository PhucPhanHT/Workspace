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
    return X.first < Y.first;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 1;i <= n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back({x,1});
        a.push_back({y,-1});
    }
    sort(a.begin(),a.end(),cmp);
    int mx_curr = -1e9,curr = 0;
    for(auto x : a){
        curr += x.second;
        mx_curr = max(mx_curr,curr);
    }
    cout << mx_curr;
    return 0;
};