// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e9 + 10;
const int MIN = -MAX;

void solve() {
    int a, b; cin >> a >> b;

    if(((a + b) % 3 == 0) && a != 0 && b != 0 && (max(a, b) <= min(a, b) * 2)) {
        cout << "YES" << endl;
    }
    else if(a == 0 && b == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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