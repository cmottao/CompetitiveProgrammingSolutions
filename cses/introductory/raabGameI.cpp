// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b; cin >> n >> a >> b;

    if(a + b <= n && a < n && b < n && (!a == !b)) {
        cout << "YES" << '\n';

        for(int i = 0; i < n; i++) {
            cout << i + 1 << ' ';
        }
        cout << '\n';

        for(int i = 0; i < n; i++) {
            if(i < a + b) cout << ((i + a) % (a + b)) + 1 << ' ';
            else cout << i + 1 << ' ';
        }
        cout << '\n';
    }
    else cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}