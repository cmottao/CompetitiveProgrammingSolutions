// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    cout << 0 << '\n';

    for(long long i = 2; i <= n; i++) {
        cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}