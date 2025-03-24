// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin >> k;
    vector<pair<int, int>> ans;
    int x = 0, y = 0;

    auto gauss = [](int n) -> long long {
        return ((long long) n * (n + 1)) / 2;
    };
    
    while(k) {
        int l = 0, r = 510;

        while(r > l) {
            int m = (l + r) / 2;
            (gauss(m) > k) ? r = m : l = m + 1;
        }

        for(int i = 0; i < r; i++) {
            ans.push_back({x, y++});
        }
        k -= gauss(r - 1);
        x++;
    }

    cout << ans.size() << '\n';
    for(auto [x, y] : ans) {
        cout << x << ' ' << y << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}