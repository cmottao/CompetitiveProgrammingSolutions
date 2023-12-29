// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y; cin >> x >> y;
    int ans = 0, d = 1;

    while(true) {
        if((y > x && x + d >= y) || (y < x && x + d <= y)) {
            cout << ans + abs(x - y);
            return;
        }
        ans += (abs(d) * 2);
        d *= -2;
    }
}

int main() {
    freopen("lostcow.out", "w", stdout);
    freopen("lostcow.in", "r", stdin);
    
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}