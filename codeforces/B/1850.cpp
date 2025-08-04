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
    int max = -1, ans = 0;

    for(int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        
        if(a <= 10 && b > max) {
            ans = i;
            max = b;
        }
    } 
    cout << ans << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}