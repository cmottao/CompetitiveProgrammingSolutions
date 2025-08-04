// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    if(n == 6) cout << "1 1 2 3 1 2";
    else {
        for(int i = 1; i <= n; i++) {
            cout << ((i <= (n + 1) / 2) ? i : i - ((n + 1) / 2)) << ' ';
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}