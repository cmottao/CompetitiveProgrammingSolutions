// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int j = 0; j < 2; j++) {
        vector<int> mp(n + 1);

        for(int i = 0; i < n; i++) {
            ans += a[i];
            mp[a[i]]++;

            if(!i) a[i] = 0;
            else if(mp[a[i]] < 2 || a[i] < a[i - 1]) a[i] = a[i - 1];
        }
    }

    for(int i = 0; i < n; i++) {
        ans += ((long long) a[i] * (n - i));
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}