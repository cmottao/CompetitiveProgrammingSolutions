// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> b(2 * n), a((2 * n) + 1);
    long long s = 0;

    for(int i = 0; i < 2 * n; i++) {
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());
    a[0] = b[0];
    
    for(int i = 1; i <= n; i++) {
        a[i * 2] = b[i];
        s -= b[i];
    }
    for(int i = 1; i < n; i++) {
        a[(i * 2) - 1] = b[i + n];
        s += b[i + n];
    }
    a[(2 * n) - 1] = a[0] - s;

    for(long long x : a) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}