// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    int ans = 0;

    for(char ch : s) {
        mp[ch]++;
    }

    for(char i = 'A'; i < 'E'; i++) {
        ans += min(mp[i], n);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}