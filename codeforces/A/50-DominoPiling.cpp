// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 100 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    cout << (n * m) / 2;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}