// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long ans = 0, mx = 0;

    for(int i = 0; i < n; i++) {
        long long xi; cin >> xi;
        mx = max(mx, xi);
        ans += mx - xi;
    }
    cout << ans; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}