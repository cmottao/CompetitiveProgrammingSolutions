// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

bool check(int n, int n1, int k) {
    if(k == 1) {
        return true;
    }
    else if(n1 > n) {
        return false;
    }
    else {
        return check(n1, n - n1, k - 1);
    }
}

void solve() {
    int n, k; cin >> n >> k;
    int ans = 0;
 
    if(k > 30) {
        cout << ans << '\n';
        return;
    }
    
    for(int i = 1; i <= n; i++) {
        if(check(n, i, k)) {
            ans++;
        }
    }
    cout << ans << '\n';
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