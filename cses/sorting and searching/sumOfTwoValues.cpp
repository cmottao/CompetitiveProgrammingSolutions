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
    int n, x; cin >> n >> x;
    vector<pair<int, int>> a(n);
    int l = 0, r = n - 1;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a[i] = {ai, i + 1};
    }
    sort(a.begin(), a.end());

    while(r > l) {
        if(a[l].first + a[r].first == x) {
            cout << a[l].second << ' ' << a[r].second;
            return;
        }
        else if(a[l].first + a[r].first > x) {
            r--;
        }
        else {
            l++;
        }
    }
    cout << "IMPOSSIBLE";
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