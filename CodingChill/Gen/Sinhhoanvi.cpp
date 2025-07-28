// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 12;

int n;
int x[MAXN + 2];
bool check = false; // check cau hinh cuoi cung

// Xay dung cau hinh dau tien
void init(){
    for(int i = 1; i <= n;i++) x[i] = i;
}

// Update them tknp
int upper(int l,int r,int kq){
    int ans = -1;
    while(l <= r){
        int mid = (l + r) >> 1;
        if (x[mid] > kq){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}

// Xay dung cac cau hinh tiep theo
void Gen(){
    // Xac dinh day con giam dai nhat
    int i = n - 1;
    while(i > 0 && x[i] > x[i + 1]) --i;
    if (i == 0){
        check = true;
        return;
    }
    else{
        //int k = n;
        // Tim phan tu lon hon x[i] dau tien
        //while(k > 0 && x[k] <= x[i]) --k;
        int k = upper(i + 1,n,x[i]);
        swap(x[k],x[i]);
        sort(x + i + 1, x + n + 1); 
    }
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
        Gen();
    }
    return 0;
};