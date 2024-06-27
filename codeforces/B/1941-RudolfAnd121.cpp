// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n - 2; i++) {
        if(a[i] < 0) {
            cout << "NO" << '\n';
            return;
        }
        a[i + 1] -= a[i] * 2;
        a[i + 2] -= a[i];
        a[i] = 0; 
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != 0) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}