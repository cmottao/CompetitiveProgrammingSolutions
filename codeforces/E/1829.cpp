// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

pair<int, int> mvs[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int g[N][N];
int n, m;

int dfs(int x, int y) {
    if(!g[x][y]) {
        return 0;
    }
    else {
        int s = g[x][y];
        g[x][y] = 0;

        for(int i = 0; i < 4; i++) {
            pair<int, int> nxt = {x + mvs[i].first, y + mvs[i].second};

            if(nxt.first < n && nxt.first >= 0 && nxt.second < m && nxt.second >= 0) {
                s += dfs(nxt.first, nxt.second);
            }
        }
        return s;
    }
}

void solve() {
    cin >> n >> m;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans = max(ans, dfs(i, j));
        }
    }
    cout << ans << '\n';
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