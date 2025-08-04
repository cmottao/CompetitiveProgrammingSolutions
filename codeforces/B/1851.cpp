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
    int n; cin >> n;
    vector<int> a, a2;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.push_back(ai); a2.push_back(ai);
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        if((a[i] % 2 == 0) != (a2[i] % 2 == 0)) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}