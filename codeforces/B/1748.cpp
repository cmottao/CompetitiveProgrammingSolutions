// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        map<char, int> mp;
        int mx = 0;

        for(int j = i; j < min(i + 110, n); j++) {
            mx = max(mx, ++mp[s[j]]);
            ans += (mx <= mp.size());
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}