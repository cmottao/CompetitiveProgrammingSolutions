// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, w, xa, ya, xb, yb; cin >> h >> w >> xa >> ya >> xb >> yb;
    int dif = xb - xa;

    if(dif < 1) cout << "Draw" << '\n';
    else {
        int ma = (dif + 1) / 2, mb = dif / 2;

        if((dif & 1) && (max(1, ya - ma) <= max(1, yb - mb)) && (min(w, ya + ma) >= min(w, yb + mb))) cout << "Alice" << '\n';
        else if(!(dif & 1) && (max(1, ya - ma) >= max(1, yb - mb)) && (min(w, ya + ma) <= min(w, yb + mb))) cout << "Bob" << '\n';
        else cout << "Draw" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}