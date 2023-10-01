// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size(), ans = 0;
    vector<int> a(n, 1);

    for(int i = 0; i < n; i++) {
        if(s[i] == 'B') {
            a[max(0, i - 1)] = 0; 
            a[max(0, i - 2)] = 0;
            a[i] = 0;
        }
        else if(s[i] == 'S') {
            a[max(0, i - 1)] = 0;
            a[min(n - 1, i + 1)] = 0;
            a[i] = 0;
        }
        else if(s[i] == 'D') {
            a[i] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        ans += a[i];
    }
    cout << ans << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();  
    }
}