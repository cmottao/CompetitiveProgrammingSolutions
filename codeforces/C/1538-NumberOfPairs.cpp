// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r; cin >> n >> l >> r;
    vector<int> a(n);
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n-1; i++) {
        ans += upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin() - (lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin());
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}