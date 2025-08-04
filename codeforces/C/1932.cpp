// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), ans(n);
    int l = 0, r = n-1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s; cin >> s;

    for(int i = 0; i < n-1; i++) {
        if(s[i] == 'L') {
            l++;
        }
        else {
            r--;
        }
    }
    ans[n - 1] = a[l] % m;

    for(int i = n-2; i >= 0; i--) {
        if(s[i] == 'L') {
            ans[i] = (ans[i + 1] * a[--l]) % m;
        }
        else {
            ans[i] = (ans[i + 1] * a[++r]) % m;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
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