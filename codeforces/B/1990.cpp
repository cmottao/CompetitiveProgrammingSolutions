// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> ans(n + 1, 1);

    for(int i = y - 1; i > 0; i--) {
        ans[i] = (-1 * ans[i + 1]);
    }
    for(int i = x + 1; i <= n; i++) {
        ans[i] = (-1 * ans[i - 1]);
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}