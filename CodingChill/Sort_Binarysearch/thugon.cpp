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
    freopen("THUGON.INP","r",stdin);
    freopen("THUGON.OUT","w",stdout);
    string s;
    map<char,int> cnt;
    while(cin >> s){
        
        int n = (int)s.size();
        cnt[s[0]] = 1;
        for(int i = 1;i < n;i++){
            if (s[i] == s[i - 1]) cnt[s[i]]++;
            else{
                if (cnt[s[i - 1]] == 1) cout << s[i - 1];
                else cout << cnt[s[i - 1]] << s[i - 1];
                cnt[s[i - 1]] = 0;
                cnt[s[i]] = 1;
            }
        }
        if (cnt[s[n - 1]] == 1) cout << s[n - 1];
        else cout << cnt[s[n - 1]] << s[n - 1];
        cnt.clear();
        cout << '\n';
    }
    return 0;
};