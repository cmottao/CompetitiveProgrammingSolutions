// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        int x = upper_bound(a.begin(), a.end(), a[i] + k) - a.begin();
        ans = max(ans, x - i);
    }
    cout << ans;
}

int main() {
    freopen("diamond.out", "w", stdout);
    freopen("diamond.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}