// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

map<char, vector<int>> x = {{'w', {1, 0, 1, 0}}, {'x', {1, 0, 0, -1}}, {'y', {0, -1, 1, 0}}, {'z', {0, -1, 0, -1}}};

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), ids = {0, n - 1, 0, m - 1};
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while(ids[1] >= ids[0]) {
        vector<pair<int, char>> p = {{abs(a[ids[0]] - b[ids[2]]), 'w'}, {abs(a[ids[0]] - b[ids[3]]), 'x'}, {abs(a[ids[1]] - b[ids[2]]), 'y'}, {abs(a[ids[1]] - b[ids[3]]), 'z'}};
        sort(p.rbegin(), p.rend());
        ans += p[0].first;

        for(int i = 0; i < 4; i++) {
            ids[i] += x[p[0].second][i];
        }
    }
    cout << ans << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif
    
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}
