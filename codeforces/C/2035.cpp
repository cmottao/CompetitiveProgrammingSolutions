// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans(n + 10, -1), mp(n + 10, 1);
    int i = 0, j = 1;
    mp[1] = mp[3] = 0;
    ans[n - 5 + (n & 1)] = 1;
    ans[n - 4 + (n & 1)] = 3;

    if(n & 1) cout << n << '\n';
    else {
        int msk = 1;

        while(msk <= n) {
            msk <<= 1;
        }
        cout << msk - 1 << '\n';

        for(int i = 0; i < 3; i++) {
            ans[n - 1 - i] = (msk >> 1) - i;
            mp[(msk >> 1) - i] = 0;
        }
    }

    while(i < n && j <= n) {
        while(i < n && ans[i] != -1) i++;
        while(j <= n && !mp[j]) j++;
        ans[i] = j;
        mp[j] = 0;
    }
    if(n == 6) ans = {1, 2, 4, 6, 5, 3};

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}