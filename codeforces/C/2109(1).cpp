// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int r;

    for(int i = 0; i < 2; i++) {
        cout << "digit" << endl;
        cin >> r;
    }

    for(int i = 8; i > 0; i >>= 1) {
        cout << "add " << -i << endl;
        cin >> r;
    }

    cout << "add " << n - 1 << endl;
    cin >> r;

    cout << '!' << endl;
    cin >> r;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}