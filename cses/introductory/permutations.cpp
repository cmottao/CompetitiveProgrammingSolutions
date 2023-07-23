// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;

    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
    }
    else {
        for(int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for(int i = 1; i <= n; i += 2) {
            cout << i << " ";
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