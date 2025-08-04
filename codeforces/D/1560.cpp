// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n; cin >> n;
    int ans = 10;

    for(long long i = 1; i < 1e18; i *= 2) {
        string m = to_string(i);
        int j = 0, k = 0;

        while(j < n.size() && k < m.size()) {
            k += (n[j++] == m[k]);
        }
        ans = min(ans, int((n.size() - k) + (m.size() - k)));
    }
    cout << ans << '\n';
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