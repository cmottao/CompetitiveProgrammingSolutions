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

vector<int> digits(int n) {
    vector<int> d;

    while(n > 0) {
        d.push_back(n % 10);
        n /= 10;
    }
    return d;
}

int dp(int n) {
    memo[0] = 0;

    if(memo[n] != -1) {
        return memo[n];
    }
    else {
        memo[n] = oo;

        for(int d : digits(n)) {
            memo[n] = min(memo[n], dp(n - d) + 1);
        }
        return memo[n];
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