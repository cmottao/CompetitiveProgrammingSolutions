// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int b = 0;

    for(int i = 1; i < n - 1; i++) {
        if(s[i] == 'B') b++;
    }

    if(s[0] == 'A' && s[n - 1] == 'A') cout << "Alice" << '\n';
    else if(s[0] == 'B' && s[n - 1] == 'A') {
        if(s[n - 2] == 'A') cout << "Alice" << '\n';
        else cout << "Bob" << '\n';
    }
    else if(s[0] == 'A' && s[n - 1] == 'B') {
        if(b) cout << "Bob" << '\n';
        else cout << "Alice" << '\n';
    }
    else cout << "Bob" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}