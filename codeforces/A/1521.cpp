// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    int a, b; cin >> a >> b;

    if(b == 1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        cout << a << ' ' << ((2 * a * b) - a) << ' ' << (2 * a * b) << endl;
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}