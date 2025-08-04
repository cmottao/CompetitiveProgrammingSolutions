// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    multiset<long long> s;
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        s.insert(ai);
    }
    
    for(long long u : s) {
        auto it = s.find(u * x);

        if(it != s.end()) {
            s.erase(it);
        }
        else {
            ans++;
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