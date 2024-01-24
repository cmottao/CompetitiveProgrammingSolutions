// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s, f; cin >> s >> f;
    int a = 0, b = 0;

    for(int i = 0; i < n; i++) {
        a += (s[i] == '0' && f[i] == '1');
        b += (s[i] == '1' && f[i] == '0');
    }
    cout << max(a, b) << '\n';
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