// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    long long mx = 0, y, z = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    y = mx - a[0];

    for(int i = 1; i < n; i++) {
        y = __gcd(y, mx - a[i]);
    }
    for(int i = 0; i < n; i++) {
        z += (mx - a[i]) / y;
    }
    cout << z << ' ' << y;
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}