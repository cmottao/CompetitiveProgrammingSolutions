// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c , d; cin >> n >> c >> d;
    vector<int> a(n * n), b;

    for(int i = 0; i < n*n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b.push_back(a[0] + (c * i) + (d * j));
        }
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < n*n; i++) {
        if(a[i] != b[i]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}