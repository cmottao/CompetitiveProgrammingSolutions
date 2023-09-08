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
    string s; cin >> s;
    int zero = 0, one = n - 1;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            zero = max(zero, i);
        }
        else {
            one = min(one, i);
        }
    }

    if(one >= zero) {
        cout << s << '\n';
    }
    else {
        cout << s.substr(0, one) << 0 << s.substr(zero + 1, n - zero) << '\n';
    }
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