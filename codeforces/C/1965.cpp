// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, m; cin >> n >> m;
    int a[n][m], dpMin[n][m], dpMax[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            dpMin[i][j] = oo;
            dpMax[i][j] = -oo;
        }
    }
    dpMin[0][0] = dpMax[0][0] = a[0][0];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i) {
                dpMin[i][j] = min(dpMin[i][j], dpMin[i - 1][j] + a[i][j]);
                dpMax[i][j] = max(dpMax[i][j], dpMax[i - 1][j] + a[i][j]);
            }
            if(j) {
                dpMin[i][j] = min(dpMin[i][j], dpMin[i][j - 1] + a[i][j]);
                dpMax[i][j] = max(dpMax[i][j], dpMax[i][j - 1] + a[i][j]);
            }
        }
    }

    int mn = dpMin[n - 1][m - 1], mx = dpMax[n - 1][m - 1];
    cout << ((mn <= 0 && mx >= 0 && abs(mn) % 2 == 0 && mx % 2 == 0) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}