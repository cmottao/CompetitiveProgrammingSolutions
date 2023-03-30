// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e9 + 10;
const int MIN = -MAX;

void solve() {
    int a;
    cin >> a;
    int b;
    cin >> b;

    if(((a + b) % 3 == 0) && a != 0 && b != 0 && (max(a, b) <= min(a, b) * 2)) {
        cout << "YES" << "\n";
    }
    else if(a == 0 && b == 0) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
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