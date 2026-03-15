// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if(n & 1) cout << a[((n + 1) / 2) + ((k + 1) / 2)] - a[((n + 1) / 2) - (k / 2)] + 1 << '\n';
    else cout << a[((n + 1) / 2) + ((k + 1) / 2)] - a[((n + 1) / 2) - 1 - (k / 2)] + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}