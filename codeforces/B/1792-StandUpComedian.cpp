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
    int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
    
    if(a1 == 0) {
        cout << 1 << '\n';
    }
    else {
        cout << a1 + (min(a2, a3) * 2) + min(a1 + 1, abs(a2 - a3) + a4) << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}