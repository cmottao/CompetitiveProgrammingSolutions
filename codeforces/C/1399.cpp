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
    vector<int> w(n + 1, 0);
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        int wi; cin >> wi;
        w[wi]++;
    }
    
    for(int i = 2; i <= 2*n; i++) {
        int s = 0;
        
        for(int j = 1; j <= i/2; j++) {
            if(i - j <= n) {
                if(j == i - j) {
                    s += w[j] / 2;
                }
                else {
                    s += min(w[j], w[i - j]);
                }
            }
        }
        ans = max(ans, s);
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