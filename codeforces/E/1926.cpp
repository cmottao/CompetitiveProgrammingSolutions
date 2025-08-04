// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int s = 0, p = 1;

    while(k > s + ((n + 1) / 2)) {
        s += (n + 1) / 2;
        p *= 2; n /= 2;
    }
    cout << p + ((k - s - 1) * 2 * p) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}