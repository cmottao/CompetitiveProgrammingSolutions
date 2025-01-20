// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, d, k; cin >> n >> d >> k;
    vector<int> l(n + 1, 0), r(n + 1, 0);
    int o = 0, mx = 0, mn = oo, bro, mth;

    for(int i = 0; i < k; i++) {
        int li, ri; cin >> li >> ri;
        l[li]++; r[ri]++;
    } 

    for(int i = 1; i <= n; i++) {
        o += l[i];

        if(i >= d) {
            if(o < mn) mth = i - d + 1;
            if(o > mx) bro = i - d + 1;
            mn = min(mn, o);
            mx = max(mx, o);
            o -= r[i - d + 1];
        }
    }
    cout << bro << ' ' << mth << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}