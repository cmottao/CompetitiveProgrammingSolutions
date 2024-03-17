// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1), b(n);
    int j = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = 0;

    for(int i = 0; i <= n; i++) {
        if(a[i] != a[j]) {
            while(j < i) {
                b[j] = i;
                j++;
            }
        }
    }

    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;

        if(r - 1 >= b[l - 1]) {
            cout << l << ' ' << b[l - 1] + 1 << '\n'; 
        }
        else {
            cout << -1 << ' ' << -1 << '\n';
        }
    }
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