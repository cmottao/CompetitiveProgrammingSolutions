// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    long long a[n][m];
    vector<pair<long long, int>> s(n);
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        s[i] = {0, i};
        
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            s[i].first += a[i][j];
        }
    }
    sort(s.rbegin(), s.rend());
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans += a[s[i].second][j] * ((n * m) - (m * i) - j);
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