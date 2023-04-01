// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1000 + 10;
const int MIN = -MAX;

void solve() {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    if(a + b == c || a + c == b || b + c == a) {
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