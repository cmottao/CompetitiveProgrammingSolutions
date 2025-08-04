// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(3));

    for(int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        if(k >= a[i][0]) k = max(k, a[i][2]);
    }
    cout << k << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}