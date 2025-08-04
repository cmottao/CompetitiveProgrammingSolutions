// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, k; cin >> x >> k;

    if(k == 2 && x == 1) cout << "YES" << '\n';
    else if(k > 1 || x == 1) cout << "NO" << '\n';
    else {
        for(int i = 2; i * i <= x; i++) {
            if(x % i == 0) {
                cout << "NO" << '\n';
                return;
            }
        }
        cout << "YES" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}