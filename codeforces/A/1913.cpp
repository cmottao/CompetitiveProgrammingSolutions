// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;

    for(int i = 1; i < s.size(); i++) {
        string b = s.substr(i, s.size() - i);
        string a = s.substr(0, i);

        if(stoi(b) > stoi(a) && s[i] != '0') {
            cout << stoi(a) << ' ' << stoi(b) << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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