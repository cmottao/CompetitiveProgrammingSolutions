// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ans = 0;
    pair<int, int> current = {0, 0};
    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());

    for(auto x : v) {
        if(x.second >= current.first) {
            ans++;
            current = x;
        }
    }
    cout << ans; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}