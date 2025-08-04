// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = oo;

    for(int i = 0; i < n - 1; i++) {
        int r;

        for(int j = 0; j < n; j++) {
            int xi = ((i == j) ? stoi(s.substr(i, 2)) : s[j] - '0');

            if(!j) r = xi;
            else if(xi < 2 || r < 2) r *= xi;
            else r += xi;
            
            j += (i == j);
        }
        ans = min(ans, r);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}