// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e18;

void solve() {
    int n; cin >> n;
    long long ans = oo, mn = oo, mn1 = oo, s = 0, s1 = 0;

    for(int i = 0; i < n; i++) {
        long long ci; cin >> ci;

        if(i & 1) {
            mn = min(mn, ci);
            s += ci;
        }
        else {
            mn1 = min(mn1, ci);
            s1 += ci;
        }

        if(i) ans = min(ans, (s + ((n - ((i + 1) / 2)) * mn)) + (s1 + ((n - ((i / 2) + 1)) * mn1)));
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}