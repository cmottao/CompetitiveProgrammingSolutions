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
    int n, c; cin >> n >> c;
    int l = 0, r = 1e9 / 2; 
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while(l <= r) {
        int m = (l + r) / 2;
        int s = 0;

        for(int i = 0; i < n; i++) {
            s += (a[i] + (2 * m)) * (a[i] + (2 * m));
            if(s > c) {
                break;
            }
        }
        
        if(s == c) {
            cout << m << endl;
            break;
        }
        else if(s < c) {
            l = m + 1;
        } 
        else {
            r = m - 1;
        }
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