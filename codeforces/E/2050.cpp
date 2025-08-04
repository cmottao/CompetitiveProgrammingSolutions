// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    string a, b, c; cin >> a >> b >> c;
    vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, oo));
    dp[0][0] = 0;

    for(int i = 0; i <= a.size(); i++) {
        for(int j = 0; j <= b.size(); j++) {
            if(i) dp[i][j] = dp[i - 1][j] + (c[i + j - 1] != a[i - 1]);
            if(j) dp[i][j] = min(dp[i][j], dp[i][j - 1] + (c[i + j - 1] != b[j - 1]));
        }
    }
    cout << dp[a.size()][b.size()] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}