// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, x; cin >> n >> x;
    vector<long long> a(n);
    long long ans = 0, mn = oo, mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
        if(i) ans += abs(a[i] - a[i - 1]);
    }

    ans += min(min(a[0], a[n - 1]) - 1, (mn - 1) * 2);
    if(x > mx) ans += min(x - max(a[0], a[n - 1]), (x - mx) * 2);

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}