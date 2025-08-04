// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    map<int, long long> a;
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        if(ai % k) {
            a[k - (ai % k)]++;
        }
    }

    for(auto p : a) {
        ans = max(ans, (k * (p.second - 1)) + p.first + 1);
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