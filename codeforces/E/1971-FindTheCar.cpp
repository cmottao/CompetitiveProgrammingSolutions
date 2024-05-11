// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, q; cin >> n >> k >> q;
    vector<int> a(k + 1), b(k + 1);
    a[0] = b[0] = 0;

    for(int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= k; i++) {
        cin >> b[i];
    }

    while(q--) {
        int d; cin >> d;
        
        if(d == n) {
            cout << b[k] << ' ';
        }
        else {
            int x = upper_bound(a.begin(), a.end(), d) - a.begin() - 1;
            cout << b[x] + (((long long) (d - a[x]) * (b[x + 1] - b[x])) / (a[x + 1] - a[x])) << ' ';
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}