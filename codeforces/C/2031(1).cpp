// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, m; cin >> x >> m;
    int ans = 0;

    for(int y = 1; y <= min(2 * x, m); y++) {
        if((x ^ y) && ((x % (x ^ y) == 0) || (y % (x ^ y) == 0))) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}