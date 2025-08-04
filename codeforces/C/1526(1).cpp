// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e18;

void solve() {
    int n; cin >> n;
    long long dp[n][n + 1];
    vector<long long> mx(n + 1, -oo);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        for(int j = 1; j <= i + 1; j++) {
            if(j == 1) dp[i][j] = ai;
            else if(mx[j - 1] >= 0) dp[i][j] = ai + mx[j - 1];
            else dp[i][j] = -oo;

            if(dp[i][j] >= 0) ans = max(ans, j);
        }

        for(int j = 1; j <= i + 1; j++) {
            mx[j] = max(mx[j], dp[i][j]);
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}