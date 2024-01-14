// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t; cin >> s >> t;
    string c = "";

    for(int i = 0; i < s.size(); i++) {
        c += s[i];

        if(c.size() >= t.size() && c.substr(c.size() - t.size(), t.size()) == t) {
            for(int j = 0; j < t.size(); j++) {
                c.pop_back();
            }
        }
    }
    cout << c;
}

int main() {
    freopen("censor.out", "w", stdout);
    freopen("censor.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}