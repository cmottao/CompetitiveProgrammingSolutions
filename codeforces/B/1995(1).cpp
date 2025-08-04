// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m; cin >> n >> m;
    vector<int> a(n);
    long long ans = 0, l = 0, r = 0, s = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while(r < n) {
        if(a[r] - a[l] > 1 || s + a[r] > m) {
            s -= a[l];
            l++;
        }
        else {
            s += a[r];
            ans = max(ans, s);
            r++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}