// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> x(n);
    int cur = 505;

    for(int i = 1; i < n; i++) {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++) {
        cur += x[i] * (i > 0);
        cout << cur << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}