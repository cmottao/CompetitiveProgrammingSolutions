// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    int m; cin >> m;
    string b, c; cin >> b >> c;

    for(int i = m - 1; i >= 0; i--) {
        if(c[i] == 'V') cout << b[i];
    }
    cout << a;

    for(int i = 0; i < m; i++) {
        if(c[i] == 'D') cout << b[i];
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}