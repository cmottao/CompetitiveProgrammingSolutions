// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int s = 0;

    for(int i = 0; i < n; i++) {
        char si; cin >> si;
        s += (si == '1');
    }
    cout << ((s <= k || n < 2 * k) ? "Alice" : "Bob") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}