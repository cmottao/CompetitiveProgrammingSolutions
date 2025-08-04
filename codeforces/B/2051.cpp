// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b, c; cin >> n >> a >> b >> c;
    int s = a + b + c;

    if(((n / s) * s) == n) cout << ((n / s) * 3) << '\n';
    else if(((n / s) * s) + a >= n) cout << ((n / s) * 3) + 1 << '\n';
    else if(((n / s) * s) + a + b >= n) cout << ((n / s) * 3) + 2 << '\n';
    else cout << ((n / s) * 3) + 3 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}