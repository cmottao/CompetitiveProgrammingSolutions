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
    a = abs(a); b = abs(b);

    if(abs(a - b) <= 1) {
        cout << a + b << endl;
    }
    else {
        cout << (min(a, b) * 2) + ((abs(a - b) * 2) - 1) << endl;
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