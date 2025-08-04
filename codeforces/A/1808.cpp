// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int lucky(int n) {
    int mn = INF, mx = -INF;

    while(n > 0) {
        mn = min(mn, n % 10);
        mx = max(mx, n % 10);

        n /= 10;
    }
    return mx - mn;
}

void solve() {
    int l, r; cin >> l >> r;
    int luckiest = -1, max_lucky = -1;
    
    for(int i = l; i <= r; i++) {
        int lucky_i = lucky(i);
        
        if(lucky_i == 9) {
            cout << i << endl;
            return; 
        }
        else if(lucky_i >= max_lucky) {
            luckiest = i;
            max_lucky = lucky_i;
        }
    }
    cout << luckiest << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}