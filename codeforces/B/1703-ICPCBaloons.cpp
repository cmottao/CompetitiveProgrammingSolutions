// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> mp(26, 0);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        char bi; cin >> bi;
        if(!mp[bi - 'A']) ans++;
        mp[bi - 'A']++;
        ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}