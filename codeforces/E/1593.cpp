// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    set<int> t[n + 1];
    vector<int> ans(n + 1, 0), vis(n + 1, 0);
    queue<int> q;
    int cur = 1, ctr = 0;

    for(int i = 1; i < n; i++) {
        int ui, vi; cin >> ui >> vi;
        t[ui].insert(vi); t[vi].insert(ui);
    }

    for(int i = 1; i <= n; i++) {
        if(t[i].size() == 1 || n == 1) q.push(i);
    }
    ans[cur] = q.size();

    while(!q.empty()) {
        int c = q.front(); q.pop();
        if(t[c].empty()) break;

        int p = *t[c].begin();
        t[p].erase(c);
        ctr++;

        if(t[p].size() == 1 && !vis[p]) {
            ans[cur + 1]++;
            vis[p] = 1;
            q.push(p);
        }
        if(ctr == ans[cur]) {
            ctr = 0;
            cur++;
        }
    }
    
    if(k > n) {
        cout << 0 << '\n';
        return;
    }

    for(int i = 1; i <= k; i++) {
        n -= ans[i];
    }
    cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}