// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> ans(n);
    int a = 1, b = n;

    for(int i = 0; i < k; i++) {
        for(int j = i; j < n; j += k) {
            ans[j] = ((i % 2) ? b-- : a++);
        }
    }
    
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