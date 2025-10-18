// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int c = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') c++;
    }
    cout << c << '\n';

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') cout << i + 1 << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}