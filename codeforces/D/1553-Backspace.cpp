// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t; cin >> s >> t;
    int i = s.size(), j = t.size();

    while(i >= 0 && j >= 0) {
        if(s[i] == t[j]) j--;
        else i--;
        i--;
    }
    cout << ((j == -1) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}