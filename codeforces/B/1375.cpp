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
    int n, m; cin >> n >> m;
    int g[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int x = 4;

            if(i == 0 || i == n - 1) {
                x--;
            }
            if(j == 0 || j == m - 1) {
                x--;
            }

            if(g[i][j] > x) {
                cout << "NO" << '\n';
                return;
            }
            else {
                g[i][j] = x;
            }
        }
    }

    cout << "YES" << '\n';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << g[i][j] << ' ';
        }
        cout << '\n';
    }
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