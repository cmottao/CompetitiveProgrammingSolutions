// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), mn(n), mx(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mn[i] = mx[i] = a[i];

        if(i) mn[i] = min(a[i], mn[i - 1]);
    }

    for(int i = n - 2; i >= 0; i--) {
        mx[i] = max(a[i], mx[i + 1]);
    }

    for(int i = 0; i < n; i++) {
        cout << (a[i] == mn[i] || a[i] == mx[i]);
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}