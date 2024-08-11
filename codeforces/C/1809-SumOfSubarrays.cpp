// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> ans(n, -1000);
    int i;

    auto gauss = [](int n) -> int {
        return (n * (n + 1)) / 2;
    };

    for(i = 1; gauss(i) <= k; i++) {
        ans[i - 1] = 2;
    } 
    if(gauss(i - 1) < k) ans[i - 1] = (2 * (k - gauss(i))) + 1;

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}