// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

void solve() {
    int n; cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(4, 0));

    for(int i = 1; i <= n; i++) {
        int ai; cin >> ai;

        for(int j = 1; j < 4; j++) {
            dp[i][j] = dp[i - 1][j];
        }

        if(ai == 1) dp[i][ai] = (dp[i][ai] + 1) % mod;
        else if(ai == 2) dp[i][ai] = (((dp[i][ai] * 2) % mod) + dp[i - 1][ai - 1]) % mod;
        else dp[i][ai] = (dp[i][ai] + dp[i - 1][ai - 1]) % mod; 
    }
    cout << dp[n][3] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}