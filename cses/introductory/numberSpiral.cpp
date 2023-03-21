// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int x;
    cin >> x;
    int y;
    cin >> y;

    if(x > y) {
        if(x % 2 == 0) {
            cout << x * x - y + 1;
        }
        else {
            x--;
            cout << x * x + y;
        }
    }
    else {
        if(y % 2 != 0) {
            cout << y * y - x + 1;
        }
        else {
            y--;
            cout << y * y + x;
        }
    }
    cout << "\n";
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}