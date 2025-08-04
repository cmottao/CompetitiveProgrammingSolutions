// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 0, mn = n + 1, mnw = n + 1;

    for(int i = 0; i < n; i++) {
        int pi; cin >> pi;

        if(pi > mn && pi < mnw) {
            mnw = pi;
            ans++;
        }
        mn = min(mn, pi);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}