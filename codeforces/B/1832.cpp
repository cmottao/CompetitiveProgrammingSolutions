// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

void solve() {
    int n, k; cin >> n >> k;
    int ans = 0;
    int a[n], pfx[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    for(int i = 1; i <= n; i++) {
        pfx[i] = pfx[i - 1] + a[i - 1];
    }

    for(int i = 0; i <= k; i++) {
        int l = 2 * (k - i), r = n - i;
        ans = max(ans, pfx[r] - pfx[l]);
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}