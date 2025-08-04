// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string ans = string(3, ' ');

    for(int i = 0; i < 3; i++) {
        ans[2 - i] = 'a' + min(26, n - 2 + i) - 1;
        n -= ans[2 - i ] - 'a' + 1;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}