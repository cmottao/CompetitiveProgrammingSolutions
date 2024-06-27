// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;

    for(int i = 0; i < n - 2; i++) {
        if(s.substr(i, 3) == "pie" || s.substr(i, 3) == "map") {
            i += 2;
            ans++;      
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}