// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t; cin >> s >> t;
    int i = 0, j = 0;

    while(i < s.size() && j < t.size()) {
        if(s[i] == t[j]) j++;
        else if(s[i] == '?') {
            s[i] = t[j];
            j++;
        }
        i++;
    }

    while(i < s.size()) {
        if(s[i] == '?') s[i] = 'a';
        i++;
    }
    
    if(j == t.size()) {
        cout << "YES" << '\n';
        cout << s << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}