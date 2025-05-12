// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    long long s = 0, cur = 0, ans = oo;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        if(s - cur <= k) {
            cout << i << '\n';
            return;
        }
        cur += a[i] - a[n - 1];
        ans = min(ans, i + 1 + ((s - cur - k + i + 1) / (i + 2)));
    }
    cout << min(ans, s - k) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}