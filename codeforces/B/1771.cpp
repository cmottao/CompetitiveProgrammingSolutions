// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> c(n + 1, oo);
    long long ans = n;
    int cur = n + 1;

    for(int i = 0; i < m; i++) {
        int xi, yi; cin >> xi >> yi;
        if(xi > yi) swap(xi, yi);
        c[xi] = min(c[xi], yi);
    }

    for(int i = n; i > 0; i--) {
        cur = min(cur, c[i]);
        ans += cur - i - 1;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}