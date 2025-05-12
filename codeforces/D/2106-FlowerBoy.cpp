// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9 + 10;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), l(m), r(m);
    int ans = oo;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for(int j = 0, i = 0; j < m; j++) {
        while(i < n && a[i] < b[j]) i++;
        l[j] = i;
        if(i < n) i++;
    }

    for(int j = m - 1, i = n - 1; j >= 0; j--) {
        while(i >= 0 && a[i] < b[j]) i--;
        r[j] = i;
        if(i >= 0) i--;
    }

    if(l[m - 1] < n || r[0] >= 0) {
        cout << 0 << '\n';
        return;
    }

    for(int i = 0; i < m; i++) {
        if((i ? l[i - 1] : -1) < ((i < m - 1) ? r[i + 1] : n)) ans = min(ans, b[i]);
    }
    cout << ((ans == oo) ? -1 : ans) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}