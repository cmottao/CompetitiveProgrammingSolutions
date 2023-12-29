// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int ans = oo;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        int s = 0;

        for(int j = 0; j < n; j++) {
            s += (j * a[(i + j) % n]);
        }
        ans = min(ans, s);
    }
    cout << ans;
}

int main() {
    freopen("cbarn.out", "w", stdout);
    freopen("cbarn.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}