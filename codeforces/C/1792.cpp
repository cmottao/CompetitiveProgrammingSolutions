// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), idx(n + 1), vis(n + 1, 0);
    int ans = 0, l = 0, r = n - 1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        idx[a[i]] = i;
    }

    for(int i = 1; i <= n / 2; i++) {
        if(a[l] != i || a[r] != n - i + 1) ans = i;    
        vis[idx[i]] = vis[idx[n - i + 1]] = 1;

        while(l < n && vis[l]) l++;
        while(r && vis[r]) r--;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}