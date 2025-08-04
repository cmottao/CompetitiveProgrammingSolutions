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
    int n, k; cin >> n >> k;
    int current = 1, no_sorted = 0;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        
        if(x == current) {
            current++;
        }
        else {
            no_sorted++;
        }
    }
    cout << (no_sorted + (k - 1)) / k << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}