// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, n; cin >> h >> n;
    vector<int> a(n), c(n);
    long long l = 0, r = 1e12;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    while(r > l) {
        long long m = (l + r) / 2, d = 0;

        for(int i = 0; i < n; i++) {
            d += ((m / c[i]) + 1) * a[i];
        }
        (d < h) ? l = m + 1 : r = m;
    }
    cout << r + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}