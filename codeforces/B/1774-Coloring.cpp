// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k; 
    int ans = 1;

    for(int i = 0; i < m; i++) {
        int ai; cin >> ai;

        if(ai > (n + k - 1) / k) ans = 0;
        else if(ai == (n + k - 1) / k && n % k) n--;
    }
    cout << (ans ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}