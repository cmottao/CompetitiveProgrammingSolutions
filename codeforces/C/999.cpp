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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> f(26, 0), r(26, 0);
    int cur = 0;

    for(char ch : s) {
        f[ch - 97]++; r[ch - 97]++;
    }

    while(k) {
        if(r[cur]) {
            r[cur]--; k--;
        }
        else {
            cur++;
        }
    }

    for(char ch : s) {
        if(f[ch - 97] != r[ch - 97]) {
            r[ch - 97]++;
        }
        else {
            cout << ch;
        }
    }
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