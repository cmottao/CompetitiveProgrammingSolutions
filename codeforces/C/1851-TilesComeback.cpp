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
    int sf = 0, sl = 0, idx = n;
    vector<int> c;

    for(int i = 0; i < n; i++) {
        int ci; cin >> ci;
        c.push_back(ci);
    }

    for(int i = 0; i < n; i++) {
        if(c[i] == c[0]) {
            sf++;
            if(sf == k) {
                idx = i;
                break;
            }
        }
    }

    for(int j = n-1; j > idx; j--) {
        if(c[j] == c[n - 1]) {
            sl++;
            if(sl == k) {
                break;
            }
        }
    }

    bool ans = ((c[0] == c[n - 1]) ? ((sf == k) || (sl == k)) : ((sf == k) && (sl == k)));
    cout << (ans ? "YES" : "NO") << '\n';
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}