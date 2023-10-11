// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;

vector<int> adj[N];
vector<int> team(N, 0);
int flg = 1;

void dfs(int s, int t) {
    if(team[s]) {
        flg &= (team[s] == t);
        return;
    }
    else {
        team[s] = t;

        for(int u : adj[s]) {
            dfs(u, (t == 1) ? 2 : 1);
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b); adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        if(!team[i]) {
            dfs(i, 1);
        }
    }

    if(!flg) {
        cout << "IMPOSSIBLE";
    }
    else {
        for(int i = 1; i <= n; i++) {
            cout << team[i] << ' ';
        }
    }
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}