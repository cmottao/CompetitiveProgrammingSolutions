// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int m; cin >> m;
    int pfx1[m], pfx2[m], ans = oo;

    for(int i = 1; i <= m; i++) {
        int ai; cin >> ai;
        pfx1[i] = pfx1[i - 1] + ai;
    }

    for(int i = 1; i <= m; i++) {
        int ai; cin >> ai;
        pfx2[i] = pfx2[i - 1] + ai;
    }

    for(int i = 0; i < m; i++) {
        ans = min(ans, max(pfx1[m] - pfx1[i + 1], pfx2[i] - pfx2[0]));
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}