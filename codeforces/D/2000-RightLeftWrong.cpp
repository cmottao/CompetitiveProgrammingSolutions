// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> pfx(n + 1);
    long long ans = 0, l = 0, r = n - 1;
    pfx[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin >> pfx[i];
        pfx[i] += pfx[i - 1];
    }
    string s; cin >> s;

    while(l < r) {
        while(l < n && s[l] != 'L') l++;
        while(r >= 0 && s[r] != 'R') r--;

        if(l < r) {
            ans += pfx[r + 1] - pfx[l];
            s[l] = s[r] = '.';
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