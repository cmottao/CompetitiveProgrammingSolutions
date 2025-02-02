// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n][n];
    vector<int> b(n, 0);
    int cur = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }

        for(int j = n - 1; j >= 0; j--) {
            if(a[i][j] == 1) b[i]++;
            else break;
        }
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++) {
        if(b[i] >= cur) cur++;
    }
    cout << cur << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}