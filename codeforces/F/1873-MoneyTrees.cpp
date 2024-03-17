// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), h(n);
    int l = 0, r = 0, s = 0, ans = 0;
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
 
    while(r < n) {
        if(s + a[r] <= k && (r <= l || h[r - 1] % h[r] == 0)) {
            ans = max(ans, r - l + 1);
            s += a[r]; r++;  
        }
        else {
            s -= a[l]; l++;
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