// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    for(int i = (1 << n) - 1; i > 0; i >>= 1) {
        for(int j = i; j < (1 << n); j += (i + 1) << 1) {
            cout << j << ' ';
        }
    }
    for(int i = 0; i < (1 << n); i += 2) {
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}