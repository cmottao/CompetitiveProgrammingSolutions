// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int p[N];
bool vis[N];

int dfs(int i) {
    vis[i] = 1;
    if(vis[p[i]]) return 1;
    return 1 + dfs(p[i]);
}

void solve() {
    int n; cin >> n;
    int ans = 0;

    for(int i = 1; i <= n; i++) {
        cin >> p[i];
        vis[i] = 0;
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) ans += (dfs(i) - 1) / 2;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}