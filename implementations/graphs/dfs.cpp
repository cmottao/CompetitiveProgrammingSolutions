// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;

vector<int> adj[MAX];
bool visited[MAX];

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
    int n; cin >> n;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y); adj[y].push_back(x);
    }

    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    solve();
}