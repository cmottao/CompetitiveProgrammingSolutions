// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> mp = {n, m};
    int cur = n < m;
    
    if(abs(n - m) > k || (n < k && m < k)) {
        cout << -1 << '\n';
        return;
    }
    
    for(int i = 0; i < n + m; i++) {
        if(i && i % k == 0) cur ^= 1;
        cout << (cur ^ !mp[cur]);
        mp[cur ^ !mp[cur]]--;
    }
    cout << '\n';
}    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) solve();
}