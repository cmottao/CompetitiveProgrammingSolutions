// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int x[2][100], a = 0, b = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        int p, q; cin >> p >> q;

        for(int j = a; j < a+p; j++) {
            x[0][j] = q;
        }
        a += p;
    }

    for(int i = 0; i < m; i++) {
        int p, q; cin >> p >> q;

        for(int j = b; j < b+p; j++) {
            x[1][j] = q;
        }
        b += p;
    }

    for(int i = 0; i < 100; i++) {
        ans = max(ans, max(0, x[1][i] - x[0][i]));
    }
    cout << ans;
}

int main() {
    freopen("speeding.out", "w", stdout);
    freopen("speeding.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}