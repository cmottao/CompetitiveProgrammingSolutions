// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
const int oo = 1e9 + 10;

vector<int> g[N];
int a[N];

int dfs(int i, int p) {
    int mn = oo;

    for(int u : g[i]) {
        if(u == p) continue;
        mn = min(mn, dfs(u, i));
    }

    if(mn == oo) return a[i];
    else if(i == 1) return a[i] + mn;
    else return min(mn, (mn + a[i]) / 2);
}

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        g[i].clear();
        cin >> a[i];
    }
    for(int i = 2; i <= n; i++) {
        int pi; cin >> pi;
        g[pi].push_back(i);
        g[i].push_back(pi);
    }
    cout << dfs(1, -1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}