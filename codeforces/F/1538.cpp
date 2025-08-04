// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string l, r; cin >> l >> r;
    int ans = 0;

    while(l.size() < r.size()) {
        l = '0' + l;
    }

    for(int i = 0; i < l.size(); i++) {
        ans += stoi(r.substr(0, i + 1)) - stoi(l.substr(0, i + 1)); 
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}