// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    map<int, int> mp, mp1;
    int ans = oo, l = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        mp[ai]++;
    }

    for(auto [k, v] : mp) {
        mp1[v]++;
    }
    for(auto [k, v] : mp1) {
        ans = min(ans, ((n - (k * v)) - (((int) mp.size() - l - v) * k)));
        l += v;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}