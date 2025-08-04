// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r; cin >> n >> l >> r;
    vector<int> a(n), b;
    long long s = 0, s1 = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < r; i++) {
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());

    for(int i = 0; i <= r - l; i++) {
        s += b[i];
    }
    b.clear();

    for(int i = l - 1; i < n; i++) {
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());

    for(int i = 0; i <= r - l; i++) {
        s1 += b[i];
    }
    cout << min(s, s1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}