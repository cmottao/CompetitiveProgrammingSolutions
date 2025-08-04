// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    int d = __gcd(a, b), ans = oo;
    set<int> c;

    for(int i = 0; i < n; i++) {
        int ci; cin >> ci;
        c.insert(ci % d);
    }

    for(int i = 0; i < n; i++) {
        ans = min(ans, *c.rbegin() - *c.begin());
        c.insert(*c.begin() + d);
        c.erase(c.begin());
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}