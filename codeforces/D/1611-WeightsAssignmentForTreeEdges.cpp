// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> b(n + 1), p(n + 1), w(n + 1, -1), ans(n + 1);
    int mx = -1;
    
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for(int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    for(int i = 1; i <= n; i++) {
        if(w[b[p[i]]] == -1 && b[p[i]] != p[i]) {
            cout << -1 << '\n';
            return;
        }
        
        if(b[p[i]] == p[i]) ans[p[i]] = w[p[i]] = mx = 0;
        else {
            ans[p[i]] = mx - w[b[p[i]]] + 1;
            w[p[i]] = mx = ans[p[i]] + w[b[p[i]]];        
        }
    }
    
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) solve();
}