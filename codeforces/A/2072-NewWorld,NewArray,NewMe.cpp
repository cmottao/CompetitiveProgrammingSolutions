// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, p; cin >> n >> k >> p;
    int d = (abs(k) + p - 1) / p;

    cout << ((d > n) ? -1 : d) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}