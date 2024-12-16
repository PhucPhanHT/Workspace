#include <bits/stdc++.h>

using namespace std;

int extended_euclid(int a,int b,int &x,int &y){
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1,y1;
    int d = extended_euclid(b,a % b,x1,y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main(){
    int a,b;
    while(cin >> a >> b){
        int x1,y1;
        int g = extended_euclid(a,b,x1,y1);
        cout << x1 << " " << y1 << " " << g << '\n';
    }
    return 0;
}