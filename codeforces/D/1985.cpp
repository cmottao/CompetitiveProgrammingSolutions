// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int lc = m, rc = 0, ur = n, dr = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char gij; cin >> gij;

            if(gij == '#') {
                lc = min(lc, j);
                rc = max(rc, j);
                ur = min(ur, i);
                dr = max(dr, i);
            }
        }
    }
    cout << ((ur + dr) / 2) + 1<< ' ' << ((lc + rc) / 2) + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}