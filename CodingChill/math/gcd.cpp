#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;

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

int gcd3(int a,int b){
    if (b == 0) return a;
    return gcd3(b,a % b);
}

int gcd4(int a,int b){
    // Neu 1 trong 2 la 0 thi ta lay thang con lai
    if (a == 0 || b == 0)  return (a | b); 
    unsigned shift = __builtin_ctz(a | b); // 15 = 1111 -> 0 so 0
    a >>= __builtin_ctz(a); // Lam no thanh so le cho a
    do{
        // Lam b thanh so le nho nhat
        b >>= __builtin_ctz(b);
        if (a > b) swap(a,b);
        b -= a;
    }while(b);
    return (a << shift);
}

long long lcm(long long a,long long b){
    int x = (a / gcd(a,b) * b);
    return x;
}


signed main(){
    int a,b;
    cin >> a >> b;
    cout << lcm(a,b);
    
}