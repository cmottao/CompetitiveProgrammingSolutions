// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    cout << ((s.size() >= 3 && s.substr(0, 2) == "10" && s[2] != '0' && stoi(s.substr(2)) > 1) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t; cin >> t;
    while(t--) solve();
}