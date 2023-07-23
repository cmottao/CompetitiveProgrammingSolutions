// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int dp(int n, vector<int> &ans) {
    ans[0] = 1;
    
    if(ans[n] != -1) {
        return ans[n];
    }
    else {
        ans[n] = 0;

        for(int i = 1; i <= 6; i++) {
            if(n - i >= 0) {
                ans[n] += dp(n - i, ans) % MOD;
            }
        }
        return ans[n] % MOD;
    }
}

void solve() {
    int n; cin >> n;
    vector<int> ans(n + 1, -1);

    cout << dp(n, ans);
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}