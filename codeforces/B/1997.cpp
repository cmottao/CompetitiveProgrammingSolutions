// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    char g[2][n];
    int ans = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }

    for(int j = 1; j < n - 1; j++) {
        if(g[0][j] == '.' && g[0][j - 1] == '.' && g[0][j + 1] == '.' && g[1][j] == '.' && g[1][j - 1] == 'x' && g[1][j + 1] == 'x') ans++;
        if(g[1][j] == '.' && g[1][j - 1] == '.' && g[1][j + 1] == '.' && g[0][j] == '.' && g[0][j - 1] == 'x' && g[0][j + 1] == 'x') ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}