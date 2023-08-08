// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e5 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

vector<vector<int>> adj(MAX);
vector<bool> visited(MAX, false);

void dfs(int s) {
    if(visited[s]) {
        return;
    }
    else {
        visited[s] = true;

        for(int u : adj[s]) {
            dfs(u);
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> ans;

    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            ans.push_back(i);
            dfs(i);
        }
    }

    cout << ans.size() - 1 << '\n';
    for(int i = 0; i < ans.size()-1; i++) {
        cout << ans[i] << ' ' << ans[i + 1] << '\n';
    }
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