// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;

    if(b == a) cout << 0 << '\n';
    else if(__builtin_clz(b) < __builtin_clz(a)) cout << -1 << '\n';
    else {
        int x = 0;

        for(int bit = 1; bit <= a; bit <<= 1) {
            if(!(bit & a)) x |= bit;
        }

        cout << 2 << '\n';
        cout << x << ' ' << ((a ^ x) ^ b) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}