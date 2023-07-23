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
    int ans = 0;
    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(), v.end());
    pair<int, int> current_pair = {0, 0};

    for(auto x : v) {
        if(x.second >= current_pair.first) {
            ans++;
            current_pair = x;
        }
    }
    cout << ans; 
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}