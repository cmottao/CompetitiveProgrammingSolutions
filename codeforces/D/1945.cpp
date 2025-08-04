// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e18;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(n);
    long long s = 0, ans = oo;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = n-1; i >= 0; i--) {
        s += a[i];
        
        if(i + 1 <= m) {
            ans = min(ans, s);
        }
        s -= max(0, a[i] - b[i]);
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