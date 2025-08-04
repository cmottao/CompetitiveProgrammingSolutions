// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long u = 0, d = 0;

    for(int i = 0; i < n; i++) {
        char ch; cin >> ch;
        ((ch == '_') ? d++ : u++);
    }
    cout << (((u + 1) / 2) * (u / 2) * d) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}