// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<long long> pfx(n + 1), pfxOne(n + 1);
    pfx[0] = pfxOne[0] = 0;
    
    for(int i = 1; i <= n; i++) {
        cin >> pfx[i];
        pfxOne[i] += pfxOne[i - 1] + (pfx[i] == 1);
        pfx[i] += pfx[i - 1];
    }

    while(q--) {
        int l, r; cin >> l >> r;
        cout << ((r == l || (pfx[r] - pfx[l - 1]) - (pfxOne[r] - pfxOne[l - 1]) < r - l + 1) ? "NO" : "YES") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}