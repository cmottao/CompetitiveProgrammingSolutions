// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int s = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i) s += abs(a[i] - a[i - 1]);
    }
    ans = min(s - abs(a[0] - a[1]), s - abs(a[n - 1] - a[n - 2]));

    for(int i = 1; i < n - 1; i++) {
        ans = min(ans, s - abs(a[i - 1] - a[i]) - abs(a[i] - a[i + 1]) + abs(a[i - 1] - a[i + 1]));
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}