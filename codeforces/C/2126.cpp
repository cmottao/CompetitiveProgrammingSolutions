// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int dif;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dif = a[k - 1];
    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++) {
        if(a[i] - a[i - 1] > dif) {
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