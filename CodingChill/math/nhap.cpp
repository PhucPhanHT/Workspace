// Written by Andrew - Phanh
#include <bits/stdc++.h>

using namespace std;

#ifdef BUG
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

const int MAXN = 100;
int van[MAXN + 2],toan[MAXN + 2],ta[MAXN + 2],GDQP[MAXN + 2],Hoa[MAXN + 2],Sinh[MAXN + 2],Su[MAXN + 2],GDKT[MAXN + 2],Tin[MAXN + 2];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // Điểm trung bình từng môn
    int nmon;
    float sum_all = 0;// tong cua tat ca cac mon
    //nmon = 1;
    cin >> nmon;
    while(nmon--){
        cerr << "Nhap diem tx: " << '\n';
        float sum = 0; // tong cua 1 mon
        float cnt = 0; // Điếm số lượng của các điếm
        for(int i = 1;i <= 5;i++){
            float tx;cin >> tx;
            if (tx > 0)++cnt;
            sum += tx;
        }
        cerr << "Nhap diem gk: " << '\n';
        float gk;cin >> gk;
        sum += gk * 2;
        cerr << "Nhap Diem ck: " << '\n';
        float ck;cin >> ck;
        sum += ck * 3;
        cnt += 5;
        sum_all += 1.0 * sum / cnt;
        cout << 1.0 * sum / cnt << '\n';
    }
    // Cộng lại chia 9
    cout << sum_all / 9.0 << '\n';
    return 0;
    // 8.22
};
