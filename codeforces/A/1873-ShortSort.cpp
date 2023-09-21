// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int c = 0;

    for(int i = 0; i < 3; i++) {
        c += i != s[i] - 'a';
    }
    cout << ((c > 2) ? "NO" : "YES") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}