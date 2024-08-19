// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> b;
    long long ans = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            b.push_back(min(min(k, n - k + 1), min(i, n - i + 1)) * min(min(k, m - k + 1), min(j, m - j + 1)));
        }
    }
    sort(b.rbegin(), b.rend());

    int w; cin >> w; 
    vector<int> a(w);

    for(int i = 0; i < w; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    for(int i = 0; i < w; i++) {
        ans += (long long) a[i] * b[i];
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}