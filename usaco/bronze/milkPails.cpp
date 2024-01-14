// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, m; cin >> x >> y >> m;
    int ans = 0;

    for(int i = 0; i <= m/x; i++) {
        ans = max(ans, (x * i) + ((y * ((m - (x * i)) / y))));
    }
    cout << ans;
}

int main() {
    freopen("pails.out", "w", stdout);
    freopen("pails.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}