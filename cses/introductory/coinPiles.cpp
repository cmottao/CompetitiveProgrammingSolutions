// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;

    if(((a + b) % 3 == 0) && a != 0 && b != 0 && (max(a, b) <= min(a, b) * 2)) {
        cout << "YES" << '\n';
    }
    else if(a == 0 && b == 0) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}