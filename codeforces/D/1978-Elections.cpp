// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, c; cin >> n >> c;
    vector<int> a(n);
    int wnrIdx = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[0] += c;

    for(int i = 0; i < n; i++) {
        if(a[i] > a[wnrIdx]) wnrIdx = i;
    }
    a[0] -= c;

    for(int i = 0; i < n; i++) {
        if(i == wnrIdx) cout << 0 << ' ';
        else if(a[i] + c < a[wnrIdx]) cout << i + 1 << ' ';
        else cout << i << ' ';
        c += a[i];
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}