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
    int n; cin >> n;
    int ans = INF;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n; i++) {
        int dif = a[i] - a[i - 1];

        if(dif < 0) {
            cout << 0 << endl;
            return;
        }
        else {
            ans = min(ans, dif); 
        }
    }
    cout << (ans / 2) + 1 << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}