// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

long long right(int x, int y, int n) {
    if(!n) return 1ll;
    long long c = 1ll << ((2 * n) - 2), m = 1ll << (n - 1);

    if(x <= m && y <= m) return right(x, y, n - 1);
    if(x > m && y <= m) return (2 * c) + right(x - m, y, n - 1);
    if(x > m) return c + right(x - m, y - m, n - 1);
    return (3 * c) + right(x, y - m, n - 1);
}

pair<int, int> left(long long d, int n) {
    if(!n) return {1, 1};
    long long c = 1ll << ((2 * n) - 2), m = 1ll << (n - 1);
    auto [x, y] = left(d % c, n - 1);

    if((d + c - 1) / c == 1) return {x, y};
    if((d + c - 1) / c == 2) return {m + x, m + y};
    if((d + c - 1) / c == 3) return {m + x, y};
    return {x, m + y};
}

void solve() {
    int n, q; cin >> n >> q;

    while(q--) {
        string t; cin >> t;

        if(t == "->") {
            int x, y; cin >> x >> y;
            cout << right(x, y, n) << '\n';
        }
        else {
            long long d; cin >> d;
            auto [x, y] = left(d, n);
            cout << x << ' ' << y << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}