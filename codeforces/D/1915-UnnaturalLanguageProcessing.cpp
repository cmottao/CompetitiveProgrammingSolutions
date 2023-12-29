// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<bool> d(n, 0);
    int i = n - 1;

    while(i > 0) {
        if(s[i] == 'a' || s[i] == 'e') {
            i -= 2;
        }
        else {
            i -= 3;
        }

        if(i > 0) {
            d[i] = 1;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << s[i];
        if(d[i]) {
            cout << '.';
        }
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