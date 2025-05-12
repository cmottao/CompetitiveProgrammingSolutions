// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y; cin >> x >> y;
    
    if(x < y) x *= (y / x);
    cout << ((y < x) ? x + y : (x + y) / 2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}