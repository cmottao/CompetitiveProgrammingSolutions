// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

string s;

int f(int i, int x) {
    if(i == s.size() - 1) return 0;
    if(s[i] == s[i + 1]) return f(i + 1, x);
    if(x && s[i] == '0' && s[i + 1] == '1') return min(f(i + 1, 0), 1 + f(i + 1, 1));
    return 1 + f(i + 1, x);
}

void solve() {
    cin >> s;
    cout << 1 + f(0, 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}