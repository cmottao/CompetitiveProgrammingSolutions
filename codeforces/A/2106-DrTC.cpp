// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int o = 0;

    for(int i = 0; i < n; i++) {
        char si; cin >> si;
        if(si == '1') o++;
    }
    cout << ((n - 1) * o) + n - o << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}