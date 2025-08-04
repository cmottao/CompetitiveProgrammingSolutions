// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    int n, q; cin >> n >> q;
    int prefix_sum[n];
    int s = 0;
    
    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        s += a;
        prefix_sum[i] = prefix_sum[i - 1] + a;
    }

    for(int i = 0; i < q; i++) {
        int l, r, k; cin >> l >> r >> k;
        int s2 = s;
        s2 -= prefix_sum[r] - prefix_sum[l - 1];

        if((s2 + ((r - l + 1) * k)) % 2 != 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}