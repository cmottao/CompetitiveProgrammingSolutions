// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m1, m2; cin >> n >> m1 >> m2;
    vector<int> f[n + 1], g[n + 1]; 
    vector<int> visF(n + 1, 0), visG(n + 1, 0), id(n + 1, 0);
    set<int> del[n + 1];
    queue<int> q;
    int ans = 0;
    
    for(int i = 0; i < m1; i++) {
        int u, v; cin >> u >> v;
        f[u].push_back(v); f[v].push_back(u); 
    }
    for(int i = 0; i < m2; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u); 
    }

    for(int i = 1; i <= n; i++) {
        if(visG[i]) continue;
        q.push(i);
        ans--;

        while(!q.empty()) {
            int c = q.front(); q.pop();
            visG[c] = 1;
            id[c] = i;

            for(int s : g[c]) {
                if(!visG[s]) q.push(s);
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int s : f[i]) {
            if(!del[i].count(s) && id[i] != id[s]) {
                del[i].insert(s);
                del[s].insert(i);
                ans++;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        if(visF[i]) continue;
        q.push(i);
        ans++;

        while(!q.empty()) {
            int c = q.front(); q.pop();
            visF[c] = 1;

            for(int s : f[c]) {
                if(!visF[s] && !del[c].count(s)) q.push(s);
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}