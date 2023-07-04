// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> prices;

    for(int i = 0; i < n; i++) {
        int p; cin >> p;
        prices.push_back(p);
    }
    sort(prices.begin(), prices.end());

    int prefix_sum[n];
    for(int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + prices[i - 1];
    }

    for(int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        cout << prefix_sum[n - x + y] - prefix_sum[n - x] << endl;
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