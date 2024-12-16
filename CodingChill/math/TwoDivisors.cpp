#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if (!a || !b) return (a | b);
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do{
        b >>= __builtin_ctz(b);
        if (a > b) swap(a,b);
        b -= a;
    }while(b);
    return a << shift;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if (b % a == 0) cout << b * (b / a) << '\n';
        else cout << b *(a / gcd(a,b)) << '\n';
    }
    return 0;
}