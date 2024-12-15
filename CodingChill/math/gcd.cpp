#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;

long long F[MAXN + 2];

void fibo(){
    F[1] = F[2] = 1;
    cout << F[1] << " " << F[2] << " ";
    for(int i = 3;i <= 90;i++){
        F[i] = F[i - 1] + F[i - 2];
        if (i <= 10){
            cout << F[i] << " ";
        }
    }
    cout << '\n';
}

int gcd1(int a,int b){
    int ansgcd = -1;
    for(int d = 1; d <= min(a,b);d++){
        if (a % d == 0 && b % d == 0) ansgcd = d;
    }
    return ansgcd;
}

int gcd2(int a,int b){
    if (b == 0) return a;
    if (a > b){
        return gcd2(b,a - b);
    }
    return gcd2(a,b - a);
}

int cnt = 0;

int gcd3(int a,int b){
    ++cnt;
    if (b == 0) return a;
    return gcd3(b,a % b);
}


signed main(){
    fibo();
   // int a,b;
   // cin >> a >> b;
 //   cout << gcd2(a,b);
}