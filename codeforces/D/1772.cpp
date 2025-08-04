// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = 1e9, mn = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++) {
        if(a[i] < a[i + 1]) {
            mx = min(mx, a[i] + ((a[i + 1] - a[i]) / 2));
        }
        else if(a[i] > a[i + 1]) {
            mn = max(mn, a[i] - ((a[i] - a[i + 1]) / 2));
        }
    }
    cout << ((mn <= mx) ? mn : -1) << '\n';
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