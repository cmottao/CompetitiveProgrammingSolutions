// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(2 * n);
    int s = 0;
    
    for(int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        s += a[i * 2];
    }
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}