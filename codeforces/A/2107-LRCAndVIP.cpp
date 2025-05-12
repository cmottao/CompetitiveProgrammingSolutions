// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = 0, c = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    for(int i = 0; i < n; i++) {
        c += (a[i] == mx);
    }

    if(c == n) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';

    for(int i = 0; i < n; i++) {
        cout << ((a[i] == mx) ? 1 : 2) << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}