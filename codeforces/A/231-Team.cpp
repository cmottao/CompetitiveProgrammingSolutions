// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1000 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        if(a + b + c >= 2) {
            ans += 1;
        }
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