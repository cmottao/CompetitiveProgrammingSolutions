// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<vector<int>> t(n + 1);
    int ans = oo, l = 0;

    for(int i = 1; i < n; i++) {
        int ui, vi; cin >> ui >> vi;
        t[ui].push_back(vi); t[vi].push_back(ui); 
    }

    if(n == 2) {
        cout << 0 << '\n';
        return;
    }

    for(int i = 1; i <= n; i++) {
        if(t[i].size() == 1) l++;
    }

    for(int i = 1; i <= n; i++) {
        int s = 0;

        for(int v : t[i]) {
            if(t[v].size() == 1) s++; 
        }
        ans = min(ans, l - s);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}