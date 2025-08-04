// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long s = 0, mx = 0, ans = 0;
    set<long long> st;

    for(int i = 0; i < n; i++) {
        long long ai; cin >> ai;
        
        s += ai;
        mx = max(mx, ai);
        ans += (s == mx * 2);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}