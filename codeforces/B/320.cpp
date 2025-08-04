// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 110;

int vis[N];
vector<int> adj[N];

int dfs(int u, int v) {
    vis[u] = 1;

    for(int s : adj[u]) {
        if(!vis[s]) dfs(s, v);
    }
    return vis[v];
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a;
    
    for(int i = 0; i < n; i++) {
        int t, x, y; cin >> t >> x >> y;

        if(t == 1) {
            for(int j = 0; j < a.size(); j++) {
                if((x < a[j].first && a[j].first < y) || (x < a[j].second && a[j].second < y)) adj[j].push_back(a.size());
                if((a[j].first < x && x < a[j].second) || (a[j].first < y && y < a[j].second)) adj[a.size()].push_back(j);
            }
            a.push_back({x, y});
        }
        else {
            cout << (dfs(x - 1, y - 1) ? "YES" : "NO") << '\n';
            fill(vis, vis + N, 0); 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}