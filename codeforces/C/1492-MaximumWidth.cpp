// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    vector<int> mx(m);
    int ans = 0;
    
    for(int i = n - 1, j = m - 1; i >= 0 && j >= 0; i--) {
        if(s[i] == t[j]) {
            mx[j] = i;
            j--;
        }
    }
    
    for(int i = 0, j = 0; i < n && j < m - 1; i++) {
        if(s[i] == t[j]) {
            ans = max(ans, mx[j + 1] - i);
            j++;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}