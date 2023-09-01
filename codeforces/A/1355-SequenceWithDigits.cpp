// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

int min_digit(int n) {
    int mn = 9;

    while(n > 0) {
        mn = min(mn, n % 10);
        n /= 10;
    }
    return mn;
}

int max_digit(int n) {
    int mx = 0;

    while(n > 0) {
        mx = max(mx, n % 10);
        n /= 10;
    }
    return mx;
}

void solve() {
    int ai, k; cin >> ai >> k;
    
    for(int i = 1; i < k; i++) {
        if(min_digit(ai) == 0) {
            break;
        }
        ai += min_digit(ai) * max_digit(ai);
    }
    cout << ai << '\n';
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