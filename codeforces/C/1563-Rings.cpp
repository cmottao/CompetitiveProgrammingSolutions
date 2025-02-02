// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            if(i < n / 2) cout << i + 2 << ' ' << n << ' ' << i + 1 << ' ' << n << '\n'; 
            else cout << 1 << ' ' << i + 1 << ' ' << 1 << ' ' << i << '\n';
            return;
        }
    }
    cout << 1 << ' ' << n - 1 << ' ' << 2 << ' ' << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}