// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

long long gauss(long long n) {
    return (n * (n + 1)) / 2;
}

void solve() {
    int n; cin >> n;
    vector<long long> pfx(n + 1);
    pfx[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin >> pfx[i];
        pfx[i] += pfx[i - 1];
    }

    int q; cin >> q;
    while(q--) {
        int l, u; cin >> l >> u;
        int i = l, d = n;

        while(d - i > 1) {
            int m = (i + d) / 2;
            ((pfx[m] - pfx[l - 1] > u) ? d = m : i = m);
        }
        cout << ((gauss(u - (pfx[i] - pfx[l - 1])) < gauss((pfx[d] - pfx[l - 1]) - u)) ? i : d) << ' '; 
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}