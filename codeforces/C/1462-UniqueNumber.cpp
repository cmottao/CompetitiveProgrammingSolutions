// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int x; cin >> x;
    int s = 9;
    string ans = "";

    while(s > 0) {
        if(x - s >= 0) {
            x -= s;
            ans = to_string(s) + ans;
        }
        s--;
    }

    if(x == 0) { 
        cout << ans << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}