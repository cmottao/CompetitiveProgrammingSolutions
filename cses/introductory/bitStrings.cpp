// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int ans = 1;
    
    for(int i = 0; i < n; i++) {
        ans = (ans * 2) % MOD;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}