// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), mp(n + 1);
    vector<pair<int, int>> ans;
    int e = 0, eIdx = -1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        mp[a[i]] = i;

        if(a[i] == b[i]) {
            eIdx = i;
            e++;
        }
    }

    auto f = [&](int i, int j) {
        ans.push_back({i, j});
        swap(a[i], a[j]);
        swap(b[i], b[j]);
        swap(mp[a[i]], mp[a[j]]);
    };

    if(e) {
        if(!(n & 1) || ((n & 1) && e > 1)) {
            cout << -1 << '\n';
            return;
        }
        if(eIdx != (n / 2)) f(eIdx, n / 2);
    }

    for(int i = 0; i < n / 2; i++) {
        if(b[mp[b[i]]] != a[i]) {
            cout << -1 << '\n';
            return;
        }
        if(mp[b[i]] != n - i - 1) f(mp[b[i]], n - i - 1);
    }

    cout << ans.size() << '\n';
    for(auto [i, j] : ans) {
        cout << i + 1 << ' ' << j + 1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}