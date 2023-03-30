// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e9 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a;
    cin >> a;
    int ans = 1;
    if(n % a != 0) {
        ans *= n / a + 1;
    }
    else {
        ans *= n / a;
    }
    if(m % a != 0) {
        ans *= m / a + 1;
    }
    else {
        ans *= m / a;
    }
    cout << ans;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}