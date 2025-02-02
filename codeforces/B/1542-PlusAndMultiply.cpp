// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b; cin >> n >> a >> b;

    for(long long i = 1; i <= n; i *= a) {
        if((n - i) % b == 0) {
            cout << "YES" << '\n';
            return;
        }
        if(a == 1) break;
    }
    cout << "NO" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}