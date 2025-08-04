// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int p = 0;

    while(240 - k - ((p + 1) * 5) >= 0 && p < n) {
        k += (p + 1) * 5;
        p++;
    }
    cout << p;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}