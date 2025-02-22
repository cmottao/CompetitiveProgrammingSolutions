// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), g[n];
    string ans(n, '0');
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++) {
        int ui, vi; cin >> ui >> vi;
        g[ui - 1].push_back(vi - 1); g[vi - 1].push_back(ui - 1);
    }
    
    for(int i = 0; i < n; i++) {
        map<int, int> mp;
        mp[a[i]]++;
        
        for(int s : g[i]) {
            if(++mp[a[s]] > 1) ans[a[s] - 1] = '1';
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