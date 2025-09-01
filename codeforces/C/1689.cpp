// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 10;

vector<int> t[N];
int s[N];

int dfs(int i, int p) {
    for(int x : t[i]) {
        if(x != p) s[i] += dfs(x, i);
    }
    return s[i] += 1;
}

int dfs1(int i, int p) {
    vector<int> c;

    for(int x : t[i]) {
        if(x != p) c.push_back(x);
    }

    if(c.empty()) return 0;
    if(c.size() == 1) return s[c[0]] - 1;
    return max(s[c[0]] - 1 + dfs1(c[1], i), s[c[1]] - 1 + dfs1(c[0], i));
}

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
        t[i].clear();
        s[i] = 0;
    }

    for(int i = 1; i < n; i++) {
        int ui, vi; cin >> ui >> vi;
        t[ui].push_back(vi); t[vi].push_back(ui);
    }

    dfs(1, 1);
    cout << dfs1(1, 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}