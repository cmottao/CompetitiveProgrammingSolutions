#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 10;

vector<int> g[N];
bool vis[N];
int flg = 0;
long long n;

int dfsCount(int i, int tgt) {
    if(vis[i]) return 0;
    if(i == tgt) flg = 1; 
    int c = vis[i] = 1;

    for(int s : g[i]) {
        c += dfsCount(s, tgt);
    }
    return c;
}

int f(int a, int b) {
    fill(vis, vis + n + 1, 0);
    int sz = vis[a] = 1;

    for(int s : g[a]) {
        int x = dfsCount(s, b);
        if(!flg) sz += x;
        flg = 0;
    }
    return sz;
}

void solve() {
    int x, y; cin >> n >> x >> y;

    for(int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << (n * (n - 1)) - ((long long) f(x, y) * f(y, x));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}