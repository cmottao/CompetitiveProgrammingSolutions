// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e18;

void solve() {
    int n, k; cin >> n >> k;
    vector<long long> a(k), ltr(n + 2, oo), rtl(n + 2, oo);

    for(int i = 0; i < k; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < k; i++) {
        int ti; cin >> ti;
        ltr[a[i]] = rtl[a[i]] = ti;
    }

    for(int i = 1; i <= n; i++) {
        ltr[i] = min(ltr[i], ltr[i - 1] + 1);
    }
    for(int i = n; i > 0; i--) {
        rtl[i] = min(rtl[i], rtl[i + 1] + 1);
    }

    for(int i = 1; i <= n; i++) {
        cout << min(ltr[i], rtl[i]) << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}