// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;
    int no = 0;

    for(int i = 1; i <= n; i++) {
        int places = i * i - 1;
        cout << ((places * (places + 1)) / 2) - no << endl;

        no += 8 * (i - 1);
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