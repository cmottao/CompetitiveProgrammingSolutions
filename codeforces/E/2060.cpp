// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

vector<vector<int>> f(N), g(N); 
int vis[N], id[N];

void dfs(int i, int p, vector<vector<int>> &g) {
    vis[i] = id[i] = p;
    
    for(int s : g[i]) {
        if(!vis[s]) dfs(s, p, g);
    }
}

void solve() {
    int n, m1, m2; cin >> n >> m1 >> m2;
    vector<pair<int, int>> e(m1);
    queue<int> q;
    int ans = 0;
    
    for(int i = 1; i <= n; i++) {
        f[i].clear();
        g[i].clear();
    }
    fill(vis, vis + n + 1, 0);
    
    for(int i = 0; i < m1; i++) {
        cin >> e[i].first >> e[i].second;
    }
    for(int i = 0; i < m2; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u); 
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i, i, g);
            ans--;   
        }
    }
    fill(vis, vis + n + 1, 0);
    
    for(auto [u, v] : e) {
        if(id[u] == id[v]) {
            f[u].push_back(v); f[v].push_back(u);
        }
        else ans++;
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i, i, f);
            ans++;   
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