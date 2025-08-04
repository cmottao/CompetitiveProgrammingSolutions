// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

void solve() {
    int n, d, h; cin >> n >> d >> h;
    double ans = ((double) (d * h) / 2) * n;
    int top = 0;

    for(int i = 0; i < n; i++) {
        int yi; cin >> yi;

        if(yi < top) {
            ans -= ((double) (top - yi) * (top - yi) * d) / (2 * h);
        }
        top = yi + h;
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(10); cout.setf(ios::fixed);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}