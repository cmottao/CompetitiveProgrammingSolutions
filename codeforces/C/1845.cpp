// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int m; cin >> m;
    string l, r; cin >> l >> r;
    int cur = 0;

    for(int i = 0; i < m; i++) {
        int mx = -1;

        for(char j = l[i]; j <= r[i]; j++) {
            int nxt = -1;

            for(int k = cur; k < s.size(); k++) {
                if(s[k] == j) {
                    nxt = k;
                    break;
                }
            }
            
            if(nxt == -1) {
                cout << "YES" << '\n';
                return;
            }
            mx = max(mx, nxt);
        }
        cur = mx + 1;
    }
    cout << "NO" << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}