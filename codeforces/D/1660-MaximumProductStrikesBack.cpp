// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), pfx(n + 1, 0);
    int p = 0, ne = 0, l = 0, r = -1, mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pfx[i + 1] = pfx[i];
        if(abs(a[i]) == 2) pfx[i + 1]++;
    }

    auto f = [&](int i, int d) {
        if(d >= i && pfx[d + 1] - pfx[i] > mx) {
            l = i; r = d;
            mx = pfx[d + 1] - pfx[i];
        }
    };

    for(int i = 0; i < n; i++) {
        ne += (a[i] < 0);

        if((i == n - 1 || a[i + 1] == 0) && a[i] != 0) {
            if(ne & 1) {
                for(int j = p; j <= i; j++) {
                    if(a[j] < 0) {
                        f(j + 1, i);
                        break;
                    }
                }
                for(int j = i; j >= p; j--) {
                    if(a[j] < 0) {
                        f(p, j - 1);
                        break;
                    }
                }
            }
            else f(p, i);
        }
        if(a[i] == 0) {
            p = i + 1;
            ne = 0;
        }
    }
    cout << l << ' ' << n - r - 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}