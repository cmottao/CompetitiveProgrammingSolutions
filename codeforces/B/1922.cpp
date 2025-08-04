// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, long long> mp;
    long long ans = 0, s = 0;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        mp[ai]++;
    }

    for(auto p : mp) {
        if(p.second > 2) {
            ans += (p.second * (p.second - 1) * (p.second - 2)) / 6;
        }
        ans += ((p.second * (p.second - 1)) / 2) * s;
        s += p.second;
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