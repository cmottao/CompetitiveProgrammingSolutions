// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

vector<int> digits(int n) {
    vector<int> digits_n;

    while(n > 0) {
        digits_n.push_back(n % 10);
        n /= 10;
    }
    return digits_n;
}

int dp(int n, vector<int> &ans) {
    ans[0] = 0;

    if(ans[n] != -1) {
        return ans[n];
    }
    else {
        ans[n] = INF;

        for(int digit : digits(n)) {
            ans[n] = min(ans[n], dp(n - digit, ans) + 1);
        }
        return ans[n];
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