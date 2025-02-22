// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;
const double eps = 1e-9;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int ans = oo;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if(n == 1) {
        cout << 0 << '\n';
        return;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            int cur = 0;
            double dif = (double) (a[j] - a[i]) / (j - i);
            
            for(int k = 0; k < n; k++) {
                if(abs(a[k] - (((k - i) * dif) + a[i])) > eps) cur++;
            }
            ans = min(ans, cur);
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