// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    
    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] == s[i + 1]) {
            cout << s.substr(0, i + 1) << ((s[i] == 'z') ? 'a' : char(s[i] + 1)) << s.substr(i + 1, s.size() - i - 1) << '\n';
            return;
        }
    }
    cout << s << ((s.back() == 'z') ? 'a' : char(s.back() + 1)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}