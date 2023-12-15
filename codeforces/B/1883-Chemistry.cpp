// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;
    int odd = 0;

    for(int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    for(auto x : mp) {
        odd += x.second % 2;
    }
    cout << ((odd > k + 1) ? "NO" : "YES") << '\n';
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