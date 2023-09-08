// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e10;

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    int ans = 0, cur = -oo;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = (a[n - 1] > 0) ? -1 : 1;

    for(int i = 0; i < n; i++) {
        cur = max(cur, a[i]);

        if(a[i] > 0 != a[i + 1] > 0) {
            ans += cur; cur = -oo;
        }
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