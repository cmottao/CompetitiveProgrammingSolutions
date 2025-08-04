// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9 + 10;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    long long s = 0;
    int mx = 0, mn = oo, c = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
        s += a[i];
    }

    for(int i = 0; i < n; i++) {
        c += (a[i] == mx);
    }

    if(mx - mn > k + 1 || (mx - mn == k + 1 && c > 1)) {
        cout << "Jerry" << '\n';
        return;
    } 
    cout << ((s & 1) ? "Tom" : "Jerry") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}