// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 10;

vector<int> adj[MAX];
int parent[MAX];

void solve() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
        parent[a] = parent[b] = 0;
    }
    parent[1] = -1;

    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int cur = q.front(); q.pop();

        for(int u : adj[cur]) {
            if(!parent[u]) {
                parent[u] = cur;
                q.push(u);
            }
        }
    }

    if(!parent[n]) {
        cout << "IMPOSSIBLE";
    }
    else {
        vector<int> ans;

        while(n > -1) {
            ans.push_back(n);
            n = parent[n];
        }
        int s = ans.size();

        cout << s << '\n';
        for(int i = s-1; i >= 0; i--) {
            cout << ans[i] << ' ';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}