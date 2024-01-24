// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d; cin >> n >> d;
    string s; cin >> s;
    int x = 1;

    for(int i = 0; i < n; i++) {
        if(d > s[i] - '0' && x) {
            cout << d;
            x = 0;
        }
        cout << s[i];
    }
    if(x) {
        cout << d;
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