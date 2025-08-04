// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 10;

void solve() {
    int n; cin >> n;
    vector<int> a(n), dp(N, -1);
    map<int, int> mp;
    int g = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        dp[a[i]] = 0;
        g = gcd(g, a[i]);
    }

    for(int i = N - 1; i > 0; i--) {
        if(dp[i] == -1) continue;

        for(int j = i - 1; j > 0; j--) {
            if(dp[j] == -1) continue;
            int d = gcd(i, j);

            if(dp[d] == -1) dp[d] = dp[i] + dp[j] + 1;
            else dp[d] = min(dp[d], dp[i] + dp[j] + 1);
        }
    }

    if(dp[g]) cout << dp[g] + n - mp[g] - 1 << '\n';
    else cout << n - mp[g] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}