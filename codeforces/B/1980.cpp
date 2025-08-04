// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, f, k; cin >> n >> f >> k;
    vector<int> a(n);
    int fnd = 0, trg;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int trg = a[f - 1];
    sort(a.rbegin(), a.rend());
    
    for(int i = 0; i < k; i++) {
        fnd |= (a[i] == trg);
    }
    cout << (!fnd ? "NO" : ((k != n && a[k] == trg) ? "MAYBE" : "YES")) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}