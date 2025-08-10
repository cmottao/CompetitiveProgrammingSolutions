// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        if(i & 1) ans[i] = 3;
        else ans[i] = -1;
    }
    if(!(n & 1)) ans[n - 1] = 2;

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