// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;

    if(c - b < b - a || ((c - b) - (b - a)) % 3) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}