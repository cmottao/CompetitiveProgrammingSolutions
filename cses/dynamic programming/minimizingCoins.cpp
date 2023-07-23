// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int dp(int x, vector<int> &c, vector<int> &ans) {
    ans[0] = 0;

    for(int i = 1; i < ans.size(); i++) {
        for(int e : c) {
            if(i - e >= 0) {
                ans[i] = min(ans[i], ans[i - e] + 1);
            }
        }
    }
    return ans[x];
}

void solve() {
    int n, x; cin >> n >> x;
    vector<int> c, ans(x + 1, MAX);

    for(int i = 0; i < n; i++) {
        int y; cin >> y;
        c.push_back(y);
    }

    int solution = dp(x, c, ans);
    cout << (solution == MAX ? -1 : solution);
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}