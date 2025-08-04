// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r; cin >> l >> r;
    vector<int> a(r + 1);
    int x = 0;
    
    for(int i = 0; i <= r; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= 1 << 17; i <<= 1) {
        int c = 0, c1 = 0;

        for(int j = 0; j <= r; j++) {
            c += (j & i);
            c1 += (a[j] & i);
        }
        if(c != c1) x |= i;
    }
    cout << x << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}