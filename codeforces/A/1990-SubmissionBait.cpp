// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> mp(n + 1, 0);

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        mp[ai]++;
    }

    for(int i = 0; i <= n; i++) {
        if(mp[i] % 2) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}