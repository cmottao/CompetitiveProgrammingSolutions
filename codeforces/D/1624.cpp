// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> a(26, 0); 
    int p = 0, x = 0;

    for(int i = 0; i < n; i++) {
        a[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        p += a[i] / 2;
        x += a[i] % 2;
    }
    cout << ((p / k) * 2) + (((p % k) * 2 + x) >= k) << '\n';
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