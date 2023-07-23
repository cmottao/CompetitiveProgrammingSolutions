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
    int ans = 0, s = 1;
    vector<int> a;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.push_back(ai);
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n-1; i++) {
        if(abs(a[i] - a[i + 1]) <= k) {
            s++;
        }
        else {
            ans = max(ans, s);
            s = 1;
        }
    }
    ans = max(ans, s);
    cout << n - ans << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}