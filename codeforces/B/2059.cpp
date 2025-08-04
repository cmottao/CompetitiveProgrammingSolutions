// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if(n == k) {
        vector<int> b;

        for(int i = 0; i < n; i++) {
            if((i & 1)) b.push_back(a[i]);
        }
        b.push_back(0);

        for(int i = 0; i < b.size(); i++) {
            if(i + 1 != b[i]) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
    else {
        for(int i = 1; i < n - k + 2; i++) {
            if(a[i] != 1) {
                cout << 1 << '\n';
                return;
            }
        }
        cout << 2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}