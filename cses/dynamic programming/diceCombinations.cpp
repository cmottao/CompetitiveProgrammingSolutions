// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

vector<int> memo(MAX, -1);

int dp(int n) {
    memo[0] = 1;
    
    if(memo[n] != -1) {
        return memo[n];
    }
    else {
        memo[n] = 0;

        for(int i = 1; i <= 6; i++) {
            if(n - i >= 0) {
                memo[n] += dp(n - i) % MOD;
            }
        }
        return memo[n] % MOD;
    }
}

void solve() {
    int n; cin >> n;
    cout << dp(n);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}