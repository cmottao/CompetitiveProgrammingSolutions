// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX; 

void solve() {
    int n, q; cin >> n >> q;
    int prefix_sum[n];

    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        prefix_sum[i] = prefix_sum[i - 1] + a;
    }

    for(int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}