// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10, oo = 1e9; 

int a[N];

int f(int i, int x, int l, int n) {
    if(a[i] >= x) return 1;
    return a[i] + l >= x && i < n - 1 && f(i + 1, x - 1, l - (x - a[i]), n);
}

void solve() {
    int n, k; cin >> n >> k;
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        int l = 0, r = oo;

        while(r > l) {
            int m = (l + r) / 2;
            f(i, m, k, n) ? l = m + 1 : r = m;
        }
        ans = max(ans, l - 1);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}