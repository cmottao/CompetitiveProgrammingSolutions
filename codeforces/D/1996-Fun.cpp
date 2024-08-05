// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    long long ans = 0;

    for(long long a = 1; a + 2 <= x && (2 * a) + 1 <= n; a++) {
        for(long long b = 1; (a * b) + a + b <= n && a + b + 1 <= x; b++) {
            ans += min(x - a - b, (n - (a * b)) / (a + b));
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