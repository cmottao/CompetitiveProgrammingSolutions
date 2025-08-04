// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a = {0};
    int ans = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        if(ai != a.back()) a.push_back(ai);
    }
    a.push_back(0);
    n = a.size();

    for(int i = 1; i < a.size() - 1; i++) {
        if(a[i] > a[i - 1] && a[i] > a[i + 1]) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}