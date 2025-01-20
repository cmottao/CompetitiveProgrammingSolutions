// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

map<char, pair<int, int>> moves = {{'U', {-1, 0}}, {'D', {1, 0}}, {'L', {0, -1}}, {'R', {0, 1}}};

void solve() {
    int n, m; cin >> n >> m;
    char a[n][m];
    vector<int> g[n * m];
    int vis[n][m];
    queue<int> q;
    int ans = n * m;

    auto valid = [&](int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m; 
    };
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            vis[i][j] = 0;
            int ni = i + moves[a[i][j]].first, nj = j + moves[a[i][j]].second;

            if(!valid(ni, nj)) q.push((m * i) + j);
            else g[(m * ni) + nj].push_back((m * i) + j);
        }
    }

    while(!q.empty()) {
        int c = q.front(); q.pop();
        vis[c / m][c % m] = 1;
        ans--;

        for(int s : g[c]) {
            q.push(s);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == '?') {
                int flg = 0;
                
                for(auto [c, m] : moves) {
                    if(c == '?') continue;
                    int ni = i + m.first, nj = j + m.second;
                    flg |= (valid(ni, nj) && (!vis[ni][nj] || a[ni][nj] == '?'));
                }
                ans -= !flg;
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}