// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;

vector<int> adj[MAX];
int visited[MAX];

void solve() {
    int n, a, b; cin >> n >> a >> b;

    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y); adj[y].push_back(x);
        visited[x] = visited[y] = 0;
    }

    queue<int> q;
    q.push(a);

    while(!q.empty()) {
        int cur = q.front(); q.pop();

        if(cur == b) {
            cout << visited[cur] << '\n'; 
            return;
        }

        for(int u : adj[cur]) {
            if(!visited[u]) {
                visited[u] = visited[cur] + 1;
                q.push(u);
            }
        }
    }
    cout << "NO" << '\n';
}