// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    
    a[0] = min(a[0], b[0] - a[0]);
    
    for(int i = 1; i < n; i++) {
        auto ptr = lower_bound(b.begin(), b.end(), a[i] + a[i - 1]);
        if(ptr == b.end()) continue;
        
        if(a[i] < a[i - 1]) a[i] = *ptr - a[i];
        else a[i] = min(a[i], *ptr - a[i]);    
    }
    
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) solve();
}