// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int l = 0, r = n - 1, x;
    bool ans = false;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while(l <= r) {
        int m = (l + r) / 2;

        if(a[m] == x) {
            ans = true;
        }
        else if(a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << (ans ? "YES" : "NO") << '\n';
}