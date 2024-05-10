// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, long long> mp;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        mp[ai]++;
    }

    int q; cin >> q; 
    while(q--) {
        long long x, y; cin >> x >> y;
        long long l = -1e9, r = x / 2, ans = 0;

        while(r >= l) {
            long long m = (l + r) / 2;

            if((x - m) * m == y) {
                ans = ((x - m == m) ? (mp[m] * (mp[m] - 1)) / 2 : mp[m] * mp[x - m]);
                break;
            }
            ((x - m) * m < y) ? l = m + 1 : r = m - 1;
        }
        cout << ans << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}