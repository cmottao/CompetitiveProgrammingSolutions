// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<long long> x(n);
    map<int, int> mp;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++) {
        long long ri; cin >> ri;

        for(int j = x[i] - ri; j <= x[i] + ri; j++) {
            mp[j] = max(mp[j], (int) floor(sqrt((ri * ri) - ((j - x[i]) * (j - x[i])))));
        }
    }

    for(auto [k, v] : mp) {
        ans += (v * 2) + 1;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}