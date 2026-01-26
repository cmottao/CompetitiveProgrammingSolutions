// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    vector<int> a(n);
    long long s = 0, mx = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];

        if(i >= min(n, k) - 1) {
            mx = max(mx, s);
            s -= a[i - min(n, k) + 1];
        }
    }

    auto f = [](long long n) -> long long {
        return (n * (n + 1)) / 2;
    };

    if(k <= n) cout << mx + f(k - 1) << '\n';
    else cout << mx + f(n - 1) + ((k - n) * n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}