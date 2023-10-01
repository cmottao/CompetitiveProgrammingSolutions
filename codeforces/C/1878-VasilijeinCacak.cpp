// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x; cin >> n >> k >> x;
    cout << (((x >= ((k * (k + 1)) / 2)) && (x <= ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2))) ? "YES" : "NO") << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}