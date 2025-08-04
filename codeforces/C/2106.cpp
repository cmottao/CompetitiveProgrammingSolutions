// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    int x = -1, mx = 0, mn = k;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        if(b[i] != -1) {
            if(x == -1) x = a[i] + b[i];
            else if(a[i] + b[i] != x) {
                cout << 0 << '\n';
                return;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(x != -1 && b[i] == -1 && (a[i] > x || a[i] + k < x)) {
            cout << 0 << '\n';
            return;
        }
    }
    cout << ((x == -1) ? k + mn - mx + 1 : 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}