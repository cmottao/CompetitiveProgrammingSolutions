// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    string ltr = "abcdefgh";

    for(int i = 1; i < 9; i++) {
        string x = s[0] + to_string(i);

        if(x != s) {
            cout << x << '\n';
        }
    }

    for(int i = 0; i < 8; i++) {
        string x = ltr.substr(i, 1) + s[1];

        if(x != s) {
            cout << x << '\n';
        }
    }
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}