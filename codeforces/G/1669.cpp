// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> p(m, 0);
    char g[n + 1][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
            g[n][j] = 'o';
        }
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            if(g[i][j] == '*') {
                g[i][j] = '.';
                p[j]++;
            }
            else if(g[i][j] == 'o') {
                while(p[j]) {
                    g[i - p[j]][j] = '*';
                    p[j]--;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << g[i][j];
        }
        cout << '\n';
    }
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}