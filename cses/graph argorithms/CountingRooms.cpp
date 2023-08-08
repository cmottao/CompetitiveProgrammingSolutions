// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e3 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

int n, m;
string b[MAX];

void dfs(int x, int y) {
    b[x][y] = '#'; 

    if(x != 0 && b[x - 1][y] == '.') {
        dfs(x - 1, y);
    }
    if(x != n - 1 && b[x + 1][y] == '.') {
        dfs(x + 1, y);
    }
    if(y != 0 && b[x][y - 1] == '.') {
        dfs(x, y - 1);
    }
    if(y != m - 1 && b[x][y + 1] == '.') {
        dfs(x, y + 1);
    }
}

void solve() {
    cin >> n >> m;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(b[i][j] == '.') {
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}