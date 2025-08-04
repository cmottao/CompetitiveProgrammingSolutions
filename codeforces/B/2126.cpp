// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int ans = 0, c = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        if(!ai) c++;

        if(ai || i == n - 1) {
            ans += c / (k + 1);
            if(c % (k + 1) == k) ans++;
            c = 0;
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