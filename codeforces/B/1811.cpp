// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;

    cout << abs(min(min(x1 - 1, n - x1), min(y1 - 1, n - y1)) - min(min(x2 - 1, n - x2), min(y2 - 1, n - y2))) << '\n';
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