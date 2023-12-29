// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    char s[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int q = 0; q < k; q++) {
            for(int j = 0; j < m; j++) {
                for(int p = 0; p < k; p++) {
                    cout << s[i][j];
                }
            }
            cout << '\n';
        }
    }
}

int main() {
    freopen("cowsignal.out", "w", stdout);
    freopen("cowsignal.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}