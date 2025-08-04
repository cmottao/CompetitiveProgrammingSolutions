// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n), rst(n);
    long long l = 0, r = 0, s = 0, ans = 0;
    vector<long long> dp(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while(l < n) {
        if(s + a[r] > x || r == n) {
            rst[l] = r;
            s -= a[l];
            l++;
        }
        else {
            s += a[r];
            r++;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        dp[i] = (rst[i] - i);
        if(rst[i] + 1 < n) dp[i] += dp[rst[i] + 1];
        ans += dp[i];
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}