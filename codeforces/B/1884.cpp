// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    long long ans = 0, zro = 0;

    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '0') {
            ans += (n - i - 1 - zro++);
            cout << ans << ' ';
        }
    }

    while(n-- > zro) {
        cout << - 1 << ' ';
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