// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> mp(5, vector<int>(n, 0));
    int ans = 0;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;

        for(char ch : s) {
            mp[ch - 'a'][i]++;
        }
    }

    for(int i = 0; i < 5; i++) {
        vector<int> a(n, 0);
        int s = 0;

        for(int i1 = 0; i1 < 5; i1++) {
            for(int j = 0; j < n; j++) {
                if(i1 == i) {
                    a[j] -= mp[i1][j];
                    s += mp[i1][j];
                }
                else {
                    a[j] += mp[i1][j];
                    s -= mp[i1][j];
                }
            }
        }
        sort(a.rbegin(), a.rend());

        if(s > 0) ans = max(ans, n);

        for(int j = 0; j < n; j++) {
            s += a[j];
            if(s > 0) ans = max(ans, n - j - 1);
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