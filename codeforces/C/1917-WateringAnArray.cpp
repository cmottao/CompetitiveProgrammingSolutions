// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, d; cin >> n >> k >> d;
    vector<int> a(n), v(k);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < k; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < d && i <= 2 * n; i++) {
        int s = 0; 

        for(int j = 0; j < n; j++) {
            if(a[j] == j + 1) s++;
        }
        ans = max(ans, s + ((d - i - 1) / 2));

        for(int j = 0; j < v[(i % k)]; j++) {
            a[j]++;
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