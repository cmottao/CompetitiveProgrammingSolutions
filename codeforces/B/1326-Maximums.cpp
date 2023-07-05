// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;
    int mx = 0;

    for(int i = 0; i < n; i++) {
        int bi; cin >> bi;

        if(i == 0) {
            cout << bi << ' ';
            mx = bi;
        }
        else {
            cout << bi + mx << ' ';
            mx = max(mx, bi + mx);
        }
    }
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}