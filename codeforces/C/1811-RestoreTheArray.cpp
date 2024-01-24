// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    a[0] = 0;

    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }
    int x = a[1];

    for(int i = 0; i < n-1; i++) {
        a[i] = min(a[i], a[i + 1]);
    }
    a[0] = max(a[0], x);

    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
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