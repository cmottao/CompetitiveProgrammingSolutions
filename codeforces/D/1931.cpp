// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    map<pair<int, int>, int> mp;
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        auto it = mp.find({(x - (ai % x)) % x, ai % y});

        if(it != mp.end()) {
            ans += (*it).second;
        }
        mp[{ai % x, ai % y}]++;
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