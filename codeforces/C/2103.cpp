// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n), b(n), pfx(n + 1, 0);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    a[n - 1] = max(a[n - 1], b[n - 1]);
    
    for(int i = n - 2; i >= 0; i--) {
        a[i] = max(a[i], max(a[i + 1], b[i]));
    }

    for(int i = 0; i < n; i++) {
        pfx[i + 1] = a[i] + pfx[i];
    }

    while(q--) {
        int l, r; cin >> l >> r;
        cout << pfx[r] - pfx[l - 1] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}