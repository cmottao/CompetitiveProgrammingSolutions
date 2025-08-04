// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    string g[n];
    int v[n][m];

    for(int i = 0; i < n; i++) {
        cin >> g[i];

        for(int j = 0; j < m; j++) {
            v[i][j] = 0;
        }
    }

    auto valid = [&](int i, int j) -> bool {
        return i >= 0 && i < n && j >= 0 && j < m && g[i][j] == '*';
    };

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(g[i][j] == '.') continue;
            int d = 0;
            while(valid(i - d - 1, j - d - 1) && valid(i - d - 1, j + d + 1)) d++;

            if(d < k) continue;
            while(d >= 0) {
                v[i - d][j - d] = v[i - d][j + d] = 1;
                d--;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!v[i][j] && g[i][j] == '*') {
                cout << "NO" << '\n';
                return;
            }
        }
    }    
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}