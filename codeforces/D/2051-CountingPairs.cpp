// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y; cin >> n >> x >> y;
    vector<int> a(n);
    long long s = 0, ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; i++) {
        ans += (upper_bound(a.begin() + i + 1, a.end(), s - x - a[i]) - a.begin()) - (lower_bound(a.begin() + i + 1, a.end(), s - y - a[i]) - a.begin());
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}
