// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        if(n % i) continue;
        int d = 0;
        
        for(int j = i; j < n; j++) {
            d = __gcd(d, abs(a[j] - a[j - i]));
        }
        if(d != 1) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}