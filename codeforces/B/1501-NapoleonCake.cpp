// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = LLONG_MAX;

void solve() {
    int n; cin >> n;
    int a[n]; int ans[n];
    int x = INF;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ans[i] = 1;
    }

    for(int i = n-1; i >= 0; i--) {
        x = min(x, i - a[i]);

        if(x < 0) {
            break;
        }
        else if(i <= x) {
            ans[i] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' '; 
    }
    cout << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}