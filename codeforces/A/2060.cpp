// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a4, a5; cin >> a1 >> a2 >> a4 >> a5;
    cout << (max((a5 - a4 == a1 + a2) + (a4 == a2 + (a5 - a4)), (a2 + (a1 + a2) == a4) + ((a1 + a2) + a4 == a5)) + 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}