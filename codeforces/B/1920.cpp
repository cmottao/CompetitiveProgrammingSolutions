// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, k, x; cin >> n >> k >> x;
    vector<int> a(n);
    int ans = -oo;
    int pfx[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    for(int i = 1; i <= n; i++) {
        pfx[i] = a[i - 1] + pfx[i - 1];
    }

    for(int i = 1; i <= k+1; i++) {
        if(i + x - 1 < n) {
            ans = max(ans, (pfx[n] - pfx[i + x - 1]) - (pfx[i + x - 1] - pfx[i - 1]));
        }
        else {
            ans = max(ans, -(pfx[n] - pfx[i - 1]));
        }
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