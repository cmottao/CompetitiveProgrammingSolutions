// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    map<array<int, 3>, int> mp;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 2; i++) {
        ans += mp[{0, a[i + 1], a[i + 2]}]++;
        ans += mp[{a[i], 0, a[i + 2]}]++;
        ans += mp[{a[i], a[i + 1], 0}]++;
        ans -= 3 * mp[{a[i], a[i + 1], a[i + 2]}]++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}