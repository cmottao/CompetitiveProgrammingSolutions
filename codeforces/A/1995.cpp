// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int ans = 0;

    for(int i = n; i > 0; i--) {
        for(int j = 0; j < ((i < n) ? 2 : 1); j++) {
            if(k < 1) break;
            k -= i;
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}