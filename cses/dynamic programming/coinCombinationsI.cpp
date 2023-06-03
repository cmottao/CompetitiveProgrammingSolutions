// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;

int dp(int x, vector<int> &c, vector<int> &ans) {
    ans[0] = 1;
    
    if(ans[x] != -1) {
        return ans[x];
    }
    else {
        ans[x] = 0;

        for(int i : c) {
            if(x - i >= 0) {
                ans[x] += dp(x - i, c, ans) % MOD;
            }
        }
        return ans[x] % MOD;
    }
}

void solve() {
    int n, x; cin >> n >> x;
    vector<int> c, ans(x + 1, -1);

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        c.push_back(x);
    }
    cout << dp(x, c, ans);
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}