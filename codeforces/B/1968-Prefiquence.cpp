// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    int i = 0, j = 0;

    while(i < n && j < m) {
        i += (a[i] == b[j]);
        j++;
    }    
    cout << i << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}