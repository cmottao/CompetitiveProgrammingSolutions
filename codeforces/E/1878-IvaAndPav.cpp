// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int pfx[n + 1][33];

    for(int j = 0; j < 32; j++) {
        pfx[0][j] = 0;
    }

    for(int i = 1; i <= n; i++) {
        int ai; cin >> ai; 

        for(int bit = 1, j = 0; j < 33; bit <<= 1, j++) {
            pfx[i][j] = pfx[i - 1][j] + ((ai & bit) ? 1 : 0);
        }
    }

    auto f = [&](int l, int r) -> int {
        int s = 0;

        for(int bit = 1, j = 0; j < 33; bit <<= 1, j++) {
            if(pfx[r][j] - pfx[l - 1][j] == r - l + 1) s |= bit;
        }
        return s;
    };

    int q; cin >> q;
    while(q--) {
        int l, k; cin >> l >> k;
        int i = l, d = n, ans = -1;

        while(d >= i) {
            int m = (i + d) / 2;
            
            if(f(l, m) >= k) {
                ans = m;
                i = m + 1;
            } 
            else d = m - 1;
        }
        cout << ans << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}