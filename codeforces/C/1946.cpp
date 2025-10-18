// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> t[N + 1];
int n, k, c;

int dfs(int u, int p, int y) {
    int s = 1;

    for(int v : t[u]) {
        if(v != p) s += dfs(v, u, y);
    }

    if(s >= y && u != p) {
        s = 0;
        c++;
    }
    return s;
}

bool f(int x) {
    c = 0;
    if(dfs(1, 1, x) < x) c--;
    return c >= k;
}

void solve() {
    cin >> n >> k;
    int l = 1, r = n + 1;

    for(int i = 1; i <= n; i++) {
        t[i].clear();
    }

    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        t[u].push_back(v); t[v].push_back(u);
    }
    
    while(r > l) {
        int m = (l + r) / 2;
        f(m) ? l = m + 1 : r = m; 
    }
    cout << l - 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}