// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int l = 0, r = n + 1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto f = [&](int x) -> bool {
        vector<bool> vis(x, 0);
        int c = 0, s = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] < x && !vis[a[i]]) {
                vis[a[i]] = 1;
                s++;
            }

            if(s == x) {
                fill(vis.begin(), vis.end(), 0);
                s = 0;
                c++;
            }
        }
        return c >= k;
    };

    while(l < r) {
        int m = (l + r) >> 1;
        f(m) ? l = m + 1 : r = m;
    }
    cout << l - 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}