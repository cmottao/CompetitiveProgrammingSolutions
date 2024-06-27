// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> b(n), c(m);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans += (b[i] + c[j] <= k);
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