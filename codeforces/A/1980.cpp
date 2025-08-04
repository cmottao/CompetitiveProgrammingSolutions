// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> mp(7, 0);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        char ch; cin >> ch;
        mp[ch - 'A']++;
    }

    for(int i = 0; i < 7; i++) {
        ans += max(0, m - mp[i]);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}