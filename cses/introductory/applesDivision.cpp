// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;
    int apples[n];
    int s = 0;

    for(int i = 0; i < n; i++) {
        int p; cin >> p;
        apples[i] = p;
        s += p;
    }
    sort(apples, apples + n);
    int x = apples[n - 1], s2 = 0;

    for(int i = 0; i < n-1; i++) {
        if((x + apples[i]) <= (s / 2)) {
            x += apples[i];
        }
        else {
            s2 += apples[i];
        }
    }
    cout << abs(s2 - x);
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}