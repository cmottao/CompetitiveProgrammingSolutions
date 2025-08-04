// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> b(n);
    int i = n - 1;

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int j = 0; j < min(n, k); j++) {
        if(b[i] > n) {
            cout << "NO" << '\n';
            return;
        }
        i -= b[i] % n;
        i += n * (i < 0);
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}