// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> ans;

    for(int i = 1; i < n && m > ans.size(); i++) {
        for(int j = i + 1; j <= n && m > ans.size(); j++) {
            if(__gcd(i, j) == 1) ans.push_back({i, j});
        }
    }

    if(ans.size() < m || m < n - 1) {
        cout << "Impossible" << '\n';
    }
    else {
        cout << "Possible" << '\n';

        for(int i = 0; i < m; i++) {
            cout << ans[i].first << ' ' << ans[i].second << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}