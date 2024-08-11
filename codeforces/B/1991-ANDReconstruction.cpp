// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> b(n - 1), a(n);

    for(int i = 0; i < n - 1; i++) {
        cin >> b[i];
    }
    a[0] = b[0];
    a[n - 1] = b[n - 2];

    for(int i = 1; i < n - 1; i++) {
        a[i] = b[i] | b[i - 1];
    }

    for(int i = 0; i < n - 1; i++) {
        if(b[i] != (a[i] & a[i + 1])) {
            cout << -1 << '\n';
            return;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}