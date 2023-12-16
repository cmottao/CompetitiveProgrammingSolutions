// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> e(2 * n);
    int ans = 0, c = 0;

    for(int i = 0; i < 2*n; i++) {
        e[i].second = (i % 2) ? -1 : 1;
        cin >> e[i].first;
    }
    sort(e.begin(), e.end());

    for(int i = 0; i < 2*n; i++) {
        c += e[i].second;
        ans = max(ans, c);
    }
    cout << ans;
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}