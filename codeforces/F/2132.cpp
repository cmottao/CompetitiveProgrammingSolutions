// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10, oo = 1e9;

int timer;
vector<int> g[N];
int dst[N], tin[N], low[N], vis[N], ans[N];
map<pair<int, int>, int> mp;
set<pair<int, int>> e;
queue<int> q;

void dfs(int v, int p = -1) {
    vis[v] = 1;
    tin[v] = low[v] = timer++;
    bool parent_skipped = 0;

    for(int to : g[v]) {
        if(to == p && !parent_skipped) {
            parent_skipped = 1;
            continue;
        }
        if(vis[to]) low[v] = min(low[v], tin[to]);
        else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);

            if(low[to] > tin[v] && e.count({min(to, v), max(to, v)})) {
                int i = mp[{min(to, v), max(to, v)}];

                if(dst[to] == -1) {
                    dst[to] = 0;
                    ans[to] = i;
                    q.push(to);
                }
                else if(dst[to] == 0) ans[to] = min(ans[to], i);

                if(dst[v] == -1) {
                    dst[v] = 0;
                    ans[v] = i;
                    q.push(v);
                }
                else if(dst[v] == 0) ans[v] = min(ans[v], i);
            }
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    int cur = n;
    
    for(int i = 1; i <= n; i++) {
        g[i].clear();
        dst[i] = tin[i] = low[i] = ans[i] = -1;
        vis[i] = 0;
    }
    q = {};
    e.clear();
    mp.clear();
    
    for(int i = 1; i <= m; i++) {
        int ui, vi; cin >> ui >> vi;
        g[ui].push_back(vi); g[vi].push_back(ui);
        mp[{min(ui, vi), max(ui, vi)}] = i;
    }

    q.push(1);
    dst[1] = 0;

    while(!q.empty()) {
        int c = q.front(); q.pop();

        for(int s : g[c]) {
            if(dst[s] == -1) {
                dst[s] = dst[c] + 1;
                q.push(s);
            }
        }
    }

    while(cur != 1) {
        for(int s : g[cur]) {
            if(dst[s] == dst[cur] - 1) {
                e.insert({min(cur, s), max(cur, s)});
                cur = s;
                break;
            }
        }
    }
    q = {};
    fill(dst, dst + n + 1, -1);

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) dfs(i);
    }

    while(!q.empty()) {
        int c = q.front(); q.pop();

        for(int s : g[c]) {
            if(dst[s] == -1) {
                dst[s] = dst[c] + 1;
                ans[s] = ans[c];
                q.push(s);
            }
            else if(dst[s] == dst[c] + 1) ans[s] = min(ans[s], ans[c]);
        }   
    }

    int q; cin >> q;
    while(q--) {
        int c; cin >> c;
        cout << ans[c] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}