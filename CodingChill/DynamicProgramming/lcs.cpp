#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3000;

string s,t;
int dp[MAXN + 2][MAXN + 2];

int main(){
    cin >> s >> t;
    int n = (int)s.size(),m = (int)t.size();
    s = "_" + s;
    t = "_" + t;
    // dp[i][j] la xau con chung dai nhat cua 2 xau s va t tai vi tri i va j tuong ung
    // dp[i][j] = dp[i - 1][j - 1] + 1; // if (s[i] == t[i])
    // dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]); else
    for(int i = 1; i <= n;i++){
        for(int j = 1;j <= m;j++){
            if (s[i] == t[j]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
        }
    }
    int i = n,j = m;
    vector<char> ans;
    while(i >= 1 && j >= 1){
        if (s[i] == t[j]){
            ans.push_back((char)(s[i]));
            --i;
            --j;
        }
        else{
            if (dp[i - 1][j] > dp[i][j - 1]){
                --i;
            }
            else --j;
        }
    }
    reverse(ans.begin(),ans.end());
    for(char x : ans) cout << x << "";
    return 0;
}