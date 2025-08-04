// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> ans(n, 0);
    int cur = 0;

    for(int i = 0; i < n; i++) {
        if((x | i) == x) ans[i] = i;
        else break;
        
        cur |= i;
    }
    if(cur != x) ans[n - 1] = x;
    
    for(int i = 0; i < n; i++) {
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