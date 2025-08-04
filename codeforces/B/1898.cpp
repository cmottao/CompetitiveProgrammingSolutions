// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = n-2; i >= 0; i--) {
        ans += ((a[i] + a[i + 1] - 1) / a[i + 1]) - 1;
        a[i] /= ((a[i] + a[i + 1] - 1) / a[i + 1]);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}