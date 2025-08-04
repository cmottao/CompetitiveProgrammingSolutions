// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

void solve() {
    int n, k; cin >> n >> k;
    
    if(((k / (n - 1)) + k) % n != 0) {
        cout << (k / (n - 1)) + k << '\n';
    }
    else {
        cout << (k / (n - 1)) + k - 1 << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}