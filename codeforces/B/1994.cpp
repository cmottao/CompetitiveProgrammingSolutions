// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s, t; cin >> s >> t;
    int flg = 0;

    for(int i = 0; i < n; i++) {
        flg |= (s[i] == '1');

        if(s[i] != t[i] && !flg) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}