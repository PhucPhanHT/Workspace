#include <bits/stdc++.h>

using namespace std;

int gcd1(int a,int b){
    int ansgcd = -1;
    for(int d = 1; d <= min(a,b);d++){
        if (a % d == 0 && b % d == 0) ansgcd = d;
    }
    return ansgcd;
}

int gcd2(int a,int b){
    
}

signed main(){
    int a,b;
    cin >> a >> b;
    cout << gcd1(a,b);
}