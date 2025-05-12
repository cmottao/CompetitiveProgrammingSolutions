// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0, f = n, l = -1;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') continue;
        f = min(f, i);
        l = i;
    }

    if(l != -1 && l < n - 1 && n - l - 1 <= k) {
        swap(s[l], s[n - 1]);
        k -= n - l - 1;

        if(f != l && f > 0 && f <= k) swap(s[f], s[0]); 
    }
    else if(f != n && f > 0 && f < n - 1 && f <= k) swap(s[f], s[0]);

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') continue;

        if(!i) ans += 10;
        else if(i == n - 1) ans += 1;
        else ans += 11;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}