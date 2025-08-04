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
    string a; cin >> a;
    int ans = 1, s = 1;

    for(int i = 0; i < n-1; i++) {
        if(a[i] == a[i + 1]) {
            s++;
        }
        else {
            if(s > ans) {
                ans = s;
            }
            s = 1;
        }
    }
    ans = max(ans, s);
    cout << ans + 1 << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}