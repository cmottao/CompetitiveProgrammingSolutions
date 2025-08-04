// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int z = 0, o = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '1') o++;
        else if(s[i] == '0' && i < n - 1 && s[i + 1] == '1') z++;
    }
    if(s[n - 1] == '0') z++;

    cout << ((o > z) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}