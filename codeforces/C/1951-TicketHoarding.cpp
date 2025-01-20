// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, k; cin >> n >> m >> k;
    vector<long long> a(n);
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        ans += (a[i] + (i * m)) * min(m, k);
        k = max(0ll, k - m);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}