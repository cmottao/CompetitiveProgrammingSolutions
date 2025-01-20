// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    multiset<int> x;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int xi; cin >> xi;
        
        if(x.count(k - xi)) {
            x.erase(x.find(k - xi));
            ans++;
        }
        else x.insert(xi);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}