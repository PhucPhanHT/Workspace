// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 20;

int n;
int x[MAXN + 2];
int check = false; // check da het cau hinh hay chua

// Xay dung cau hinh dau
void init(){
    for(int i = 1; i <= n;i++) x[i] = 0;
}

// Sinh cau hinh
void gen(){
    int i = n;
    while(i > 0 && x[i] == 1){
        x[i] = 0;
        --i;
    }
    if (i == 0) check = true; // Da du cau hinh
    x[i] = 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    init();
    while(!check){
        for(int i = 1; i <= n;i++){
            cout << x[i];
        }
        cout << '\n';
        gen();
    }
    return 0;
};