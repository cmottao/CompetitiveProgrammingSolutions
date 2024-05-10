// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;

    for(int i = 0; i < s.size()-1; i++) {
        if((s[i] != 'Y' && s[i] != 'e' && s[i] != 's') || (s[i] == 'Y' && s[i + 1] != 'e') || (s[i] == 'e' && s[i + 1] != 's') || (s[i] == 's' && s[i + 1] != 'Y')) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << ((s.size() == 1 && (s[0] != 'Y' && s[0] != 'e' && s[0] != 's')) ? "NO" : "YES") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}