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
    int l = 0, r = n - 1;

    while(r >= l) {
        if((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')) {
            l++; r--; n -= 2;
            continue;
        }
        else {
            break;
        }
    }
    cout << n << '\n';
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