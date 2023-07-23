// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Calculates the sum of elements within the specified ranges using prefix sums.
void prefixSum() {
    int n, q; cin >> n >> q;
    int pfx[n];

    for(int i = 1; i <= n; i++) {
        int ni; cin >> ni;
        pfx[i] = pfx[i - 1] + ni;
    }

    for(int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        cout << pfx[r] - pfx[l - 1] << endl;
    }
}