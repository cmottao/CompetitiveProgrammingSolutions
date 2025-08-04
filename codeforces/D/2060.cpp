// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 1; i < n; i++) {
        int mn = min(a[i], a[i - 1]);
        a[i - 1] -= mn;
        a[i] -= mn;
    }

    for(int i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
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