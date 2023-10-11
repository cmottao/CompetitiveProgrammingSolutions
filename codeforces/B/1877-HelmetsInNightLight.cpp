// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p; cin >> n >> p;
    vector<pair<long long, long long>> a(n + 1);
    long long ans = p, s = 1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i].second;

    }
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
    }
    a[n] = {p, n};
    sort(a.begin(), a.end());

    for(auto x : a) {
        x.second = min(x.second, n - s);
        s += x.second;
        ans += x.first * x.second;

        if(s == n) {
            break;
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