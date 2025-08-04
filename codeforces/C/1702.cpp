// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> u(n);
    map<int, pair<int, int>> mp;

    for(int i = 0; i < n; i++) {
        cin >> u[i];
        if(mp.find(u[i]) == mp.end()) mp[u[i]] = {i, i};
        else mp[u[i]].second = i;
    }

    while(k--) {
        int a, b; cin >> a >> b;
        cout << ((mp.find(a) == mp.end() || mp.find(b) == mp.end() || mp[b].second < mp[a].first) ? "NO" : "YES") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}