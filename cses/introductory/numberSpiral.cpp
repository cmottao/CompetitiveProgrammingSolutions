// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y; cin >> x >> y;

    if(x > y) {
        if(x % 2 == 0) {
            cout << x * x - y + 1;
        }
        else {
            x--;
            cout << x * x + y;
        }
    }
    else {
        if(y % 2 != 0) {
            cout << y * y - x + 1;
        }
        else {
            y--;
            cout << y * y + x;
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}