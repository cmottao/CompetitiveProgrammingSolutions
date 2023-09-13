// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    long long prefix_sum[n];

    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        prefix_sum[i] = prefix_sum[i - 1] + a;
    }

    for(int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}