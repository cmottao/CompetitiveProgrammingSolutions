// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

vector<int> g[N];
int vis[N], mp[N];

int dfs(int u) {
    vis[u] = 1;
    int c = 1;

    for(int s : g[u]) {
        if(!vis[s]) c += dfs(s);
    }
    return c;
}

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        g[i].clear();
        vis[i] = mp[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        int ai, bi; cin >> ai >> bi;
        g[ai].push_back(bi); g[bi].push_back(ai);
    }

    for(int i = 1; i <= n; i++) {
        if(g[i].size() > 2 || (!vis[i] && (dfs(i) & 1))) {
            cout << "NO" << '\n';
            return;
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