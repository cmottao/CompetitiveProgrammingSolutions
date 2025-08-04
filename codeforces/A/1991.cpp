// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i % 2 == 0) mx = max(mx, a[i]);
    }
    cout << mx << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}