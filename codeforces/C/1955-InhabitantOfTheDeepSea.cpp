// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    long long ans = 0, kl = (k + 1) / 2, kr = k / 2;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        int x = a[i];
        a[i] = max(0ll, a[i] - kl);
        kl = max(0ll, kl - x); 
    }
    for(int i = n-1; i >= 0; i--) {
        int x = a[i];
        a[i] = max(0ll, a[i] - kr);
        kr = max(0ll, kr - x);
    }
    
    for(int i = 0; i < n; i++) {
        ans += (a[i] <= 0);
    }
    cout << ans << '\n';
}

int main() {
    #if LOCkl
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}