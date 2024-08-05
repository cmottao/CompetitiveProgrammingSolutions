// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9 + 10;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int mx = 0, l = oo, r = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    for(int i = 0; i < n; i++) {
        a[i] += ((2 * k) * ((mx - k - a[i] + (2 * k) - 1) / (2 * k)));
        l = min(l, a[i]);
        r = max(r, a[i]);
    }
    cout << ((l + k > r) ? r : -1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}