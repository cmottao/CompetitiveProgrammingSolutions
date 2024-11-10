// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a[n];
    int mx = 0;

    auto gauss = [](int n) -> long long {
        return ((long long) n * (n + 1)) / 2; 
    };

    for(int i = 0; i < n; i++) {
        int l; cin >> l;
        int mex = 0, flg = 1, k = 0;
        a[i].resize(l);

        for(int j = 0; j < l; j++) {
            cin >> a[i][j];
        }
        sort(a[i].begin(), a[i].end());

        while(k < l) {
            if(k && a[i][k] == a[i][k - 1]) k++;
            else {
                if(a[i][k] == mex) {
                    mex++;
                    k++;
                }
                else if(flg) {
                    flg = 0;
                    mex++;
                }
                else break;
            }
        }
        mx = max(mx, mex + flg);
    }
    cout << ((m < mx) ? (long long) mx * (m + 1) : ((long long) mx * (mx + 1)) + gauss(m) - gauss(mx)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}