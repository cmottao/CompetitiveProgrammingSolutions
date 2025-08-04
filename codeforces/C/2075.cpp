// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m; cin >> n >> m;
    vector<long long> a(m), pfx(m + 1, 0);
    long long ans = 0;

    for(int i = 0; i < m; i++) {
        cin >> a[i];
        a[i] = min(a[i], n - 1);
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < m; i++) {
        pfx[i + 1] = pfx[i] + a[i]; 
    }

    for(int i = 0; i < m; i++) {
        auto ptr = lower_bound(a.begin() + i + 1, a.end(), n - a[i]);
        ans += pfx[m] - pfx[ptr - a.begin()] + ((a[i] - n + 1) * (a.end() - ptr));
    }
    cout << ans * 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}