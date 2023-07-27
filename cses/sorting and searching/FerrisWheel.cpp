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
    int n, x; cin >> n >> x;
    int l = 0, r = n - 1, ans = 0;
    vector<int> p(n);

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    while(r >= l) {
        if(r == l) {
            ans++;
            break;
        }

        if(p[l] + p[r] > x) {
            ans++; r--;
        }
        else {
            ans++; l++; r--;
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