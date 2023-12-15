// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e15;

void solve() {
    int n; cin >> n;
    long long pfx[n];
    long long ans = 0;

    for(int i = 1; i <= n; i++) {
        long long ni; cin >> ni;
        pfx[i] = pfx[i - 1] + ni;
    }

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            long long mn = oo, mx = 0;

            for(int j = 1; j <= n; j += i) {
                long long s = pfx[j + i - 1] - pfx[j - 1];
                mx = max(mx, s);
                mn = min(mn, s);
            }
            ans = max(ans, mx - mn);
        }
    }
    cout << ans << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}