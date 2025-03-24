// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

set<int> t[N + 1];
int vis[N + 1];

void dfs(int u) {
    vis[u] = 1;

    for(int s : t[u]) {
        if(!vis[s]) dfs(s);
    }
}

void solve() {
    int n; cin >> n;
    int ans = 0;

    for(int i = 1; i <= n; i++) {
        t[i].clear();
        vis[i] = 0;
    }
 
    for(int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        t[u].insert(v); t[v].insert(u);
    }

    for(int x = 0; x < 2; x++) {
        int mx = 0, mxV = 0, mnAf;

        for(int i = 1; i <= n; i++) {
            int af = 0;

            for(int s : t[i]) {
                af += t[s].size();
            }

            if(t[i].size() > mx) {
                mx = t[i].size();
                mxV = i;
                mnAf = af;
            }
            else if(t[i].size() == mx && af < mnAf) {
                mxV = i;
                mnAf = af;
            }
        }

        for(int i = 1; i <= n; i++) {
            t[i].erase(mxV);
        }
        t[mxV].clear();
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans - 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}