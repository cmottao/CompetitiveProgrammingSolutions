// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i) {
            a[i] += a[i - 1];
        }
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(i) {
            b[i] = max(b[i], b[i - 1]);
        }
    }

    for(int i = 0; i < min(k, n); i++) {
        ans = max(ans, a[i] + (b[i] * (k - i - 1)));
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