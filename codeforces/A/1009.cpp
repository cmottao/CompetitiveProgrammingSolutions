// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> c(n), a(m);
    int j = 0;

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[j] >= c[i]) j++;
    }
    cout << j;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}