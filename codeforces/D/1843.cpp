// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;

vector<int> adj[N];
long long ans[N];

int dfs(int s, int p) {
    if(adj[s].size() == 1 && s != 1) {
        return ans[s] = 1;
    }
    else {
        for(int u : adj[s]) {
            if(u != p) {
                ans[s] += dfs(u, s);
            }
        }
        return ans[s];
    }
}

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        adj[i].clear();
        ans[i] = 0;
    }

    for(int i = 0; i < n-1; i++) {
        int ui, vi; cin >> ui >> vi;
        adj[ui].push_back(vi); adj[vi].push_back(ui);
    }
    dfs(1, -1);

    int q; cin >> q;
    while(q--) {
        int x, y; cin >> x >> y;
        cout << ans[x] * ans[y] << '\n';
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