// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 20;

int n,k;
int x[MAXN + 2];
bool check = false;

// Xay dung cau hinh dau tien
void init(){
    for(int i = 1;i <= k;i++) x[i] = i;
}

// Xay dung cau hinh tiep theo
void Gen(){
    int i = k;
    while(i > 0 && x[i] == (n - k + i)){
        --i;
    }
    if (i == 0){
        check = true;
        return;
    }
    ++x[i];
    for(int j = i + 1;j <= k;j++){
        x[j] = x[j - 1] + 1;
    }   

}

bool check_scp(long long x){
    long long sq = sqrt(x);
    if (sq * sq == x) return true;
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    init();
    int cnt = 0;
    while(!check){
        long long num = 1;    
        for(int i = 1; i <= k;i++){
            cout << x[i] << " ";
            num = num * x[i];
        }
        if (check_scp(num)) ++cnt;
        cout << '\n';
        Gen();
    }
    cout << cnt;
    return 0;
};