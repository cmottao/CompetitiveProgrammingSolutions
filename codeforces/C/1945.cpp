// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string a; cin >> a;
    vector<int> pfx(n + 1);
    int ans = -1;
    pfx[0] = 0;

    for(int i = 0; i < n; i++) {
        pfx[i + 1] = pfx[i] + (a[i] - '0'); 
    }

    for(int i = 0; i <= n; i++) {
        if((i - pfx[i] >= ((i + 1) / 2)) && (pfx[n] - pfx[i] >= ((n - i + 1) / 2)) && abs((n / float(2)) - i) < abs(n / float(2) - ans)) {
            ans = i;
        }
    }
    cout << ans << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}