// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r, x, a, b; cin >> l >> r >> x >> a >> b;
    
    if(a > b) {
        swap(a, b);
    }

    if(a == b) {
        cout << 0 << '\n';
    }
    else if(b - a >= x) {
        cout << 1 << '\n';
    }
    else if(r >= b + x || a - x >= l) {
        cout << 2 << '\n';
    }
    else if(r >= a + x && b - x >= l) {
        cout << 3 << '\n';
    }
    else {
        cout << -1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}